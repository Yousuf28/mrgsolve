// This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
// To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/ or send a letter to
// Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.

#include "odeproblem.h"
#include "RcppInclude.h"

#define CRUMP(a) Rcpp::stop(a)
#define REP(a)   Rcpp::Rcout << #a << std::endl;
#define nREP(a)  Rcpp::Rcout << a << std::endl;
#define say(a)   Rcpp::Rcout << a << std::endl;


/** Perform a simulation run.
 * 
 * @param parin list of data and options for the simulation
 * @param inpar numeric parameter values
 * @param parnames parameter names
 * @param init numeric initial values
 * @param cmtnames compartment names
 * @param capture indices in capture vector to actually get
 * @param funs list of pointer addresses to model functions generated by 
 * getNativeSymbolInfo()
 * @param data the main data set
 * @param idata the idata data aset
 * @param OMEGA between-ID normal random effects
 * @param SIGMA within-ID normal random effects
 * @return list containing matrix of simulated data and a character vector of
 * tran names that may have been carried into the output
 *
 */

namespace {
  unsigned int timecol = 0;
  unsigned int cmtcol = 1;
  unsigned int evidcol = 2;
  unsigned int amtcol = 3;
}
// [[Rcpp::export]]
Rcpp::NumericMatrix QUICKSIM(const Rcpp::List parin,
                             const Rcpp::NumericVector& param,
                             const Rcpp::NumericVector& init,
                             const Rcpp::IntegerVector& capturei,
                             const Rcpp::List& funs,
                             const Rcpp::NumericMatrix& data) {
  
  const int capn = capturei.at(0);
  
  odeproblem *prob  = new odeproblem(param, init, funs, capn);
  
  prob->copy_parin(parin);
  
  const unsigned int neq = prob->neq();
  
  Rcpp::NumericMatrix ans(data.nrow(),neq+1+capn);
  
  for(int i = 0; i < neq; ++i) {
    prob->y_init(i,init[i]); 
  }
  
  prob->lsoda_init();

  int j = 0;
  double tto =0;
  double tfrom = data(0,timecol);
  int capstart = 1 + neq;
  
  for(int i = 0; i < data.nrow(); ++i) {
    
    tto = data(i,timecol);
    
    prob->advance(tfrom,tto);
    
    if(data(i,evidcol)==1) {
      prob-> y(data(i,cmtcol)-1,data(i,amtcol) + prob->y(data(i,cmtcol)-1));
      prob->lsoda_init();
    }
    
    prob->table_call();
    
    ans(i,0) = data(i,timecol);
    
    for(j = 0; j < neq; ++j) ans(i,1+j) = prob->y(j);
    
    for(j = 0; j < capn; j++) {
      ans(i,capstart+j) = prob->capture(capturei[1+j]); 
    }
    
    tfrom  = tto;
  }
  
  // Clean up
  delete prob;
  return ans;
}


