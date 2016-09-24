// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/mrgsolve.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// DEVTRAN
Rcpp::List DEVTRAN(const Rcpp::List parin, const Rcpp::NumericVector& inpar, const Rcpp::CharacterVector& parnames, const Rcpp::NumericVector& init, Rcpp::CharacterVector& cmtnames, const Rcpp::IntegerVector& capture, const Rcpp::List& funs, const Rcpp::NumericMatrix& data, const Rcpp::NumericMatrix& idata, Rcpp::NumericMatrix& OMEGA, Rcpp::NumericMatrix& SIGMA);
RcppExport SEXP mrgsolve_DEVTRAN(SEXP parinSEXP, SEXP inparSEXP, SEXP parnamesSEXP, SEXP initSEXP, SEXP cmtnamesSEXP, SEXP captureSEXP, SEXP funsSEXP, SEXP dataSEXP, SEXP idataSEXP, SEXP OMEGASEXP, SEXP SIGMASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type parin(parinSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type inpar(inparSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type parnames(parnamesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type init(initSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type cmtnames(cmtnamesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type capture(captureSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type funs(funsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type idata(idataSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type OMEGA(OMEGASEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type SIGMA(SIGMASEXP);
    rcpp_result_gen = Rcpp::wrap(DEVTRAN(parin, inpar, parnames, init, cmtnames, capture, funs, data, idata, OMEGA, SIGMA));
    return rcpp_result_gen;
END_RCPP
}
// MVGAUSS
arma::mat MVGAUSS(Rcpp::NumericMatrix& OMEGA_, int n);
RcppExport SEXP mrgsolve_MVGAUSS(SEXP OMEGA_SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type OMEGA_(OMEGA_SEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(MVGAUSS(OMEGA_, n));
    return rcpp_result_gen;
END_RCPP
}
// SIMRE
Rcpp::List SIMRE(int n1, Rcpp::NumericMatrix& OMEGA, int n2, Rcpp::NumericMatrix& SIGMA, int seed);
RcppExport SEXP mrgsolve_SIMRE(SEXP n1SEXP, SEXP OMEGASEXP, SEXP n2SEXP, SEXP SIGMASEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type OMEGA(OMEGASEXP);
    Rcpp::traits::input_parameter< int >::type n2(n2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type SIGMA(SIGMASEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(SIMRE(n1, OMEGA, n2, SIGMA, seed));
    return rcpp_result_gen;
END_RCPP
}
// decorr
void decorr(Rcpp::NumericMatrix& x);
RcppExport SEXP mrgsolve_decorr(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type x(xSEXP);
    decorr(x);
    return R_NilValue;
END_RCPP
}
// ZERO
Rcpp::NumericMatrix ZERO(Rcpp::NumericMatrix& x);
RcppExport SEXP mrgsolve_ZERO(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(ZERO(x));
    return rcpp_result_gen;
END_RCPP
}
// SUPERMATRIX
Rcpp::NumericMatrix SUPERMATRIX(const Rcpp::List& a, bool keep_names);
RcppExport SEXP mrgsolve_SUPERMATRIX(SEXP aSEXP, SEXP keep_namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type a(aSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_names(keep_namesSEXP);
    rcpp_result_gen = Rcpp::wrap(SUPERMATRIX(a, keep_names));
    return rcpp_result_gen;
END_RCPP
}
// get_tokens
Rcpp::List get_tokens(const Rcpp::CharacterVector& code);
RcppExport SEXP mrgsolve_get_tokens(SEXP codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type code(codeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_tokens(code));
    return rcpp_result_gen;
END_RCPP
}
// from_to
void from_to(const Rcpp::CharacterVector& a, const Rcpp::CharacterVector& b, Rcpp::IntegerVector& ai, Rcpp::IntegerVector& bi);
RcppExport SEXP mrgsolve_from_to(SEXP aSEXP, SEXP bSEXP, SEXP aiSEXP, SEXP biSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type b(bSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type ai(aiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type bi(biSEXP);
    from_to(a, b, ai, bi);
    return R_NilValue;
END_RCPP
}
// EXPAND_EVENTS
Rcpp::NumericMatrix EXPAND_EVENTS(const Rcpp::IntegerVector& idcol_, const Rcpp::NumericMatrix& events, const Rcpp::NumericVector& id);
RcppExport SEXP mrgsolve_EXPAND_EVENTS(SEXP idcol_SEXP, SEXP eventsSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type idcol_(idcol_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type events(eventsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(EXPAND_EVENTS(idcol_, events, id));
    return rcpp_result_gen;
END_RCPP
}
// TOUCH_FUNS
Rcpp::List TOUCH_FUNS(const Rcpp::NumericVector& lparam, const Rcpp::NumericVector& linit, int Neta, int Neps, const Rcpp::CharacterVector& capture, const Rcpp::List& funs);
RcppExport SEXP mrgsolve_TOUCH_FUNS(SEXP lparamSEXP, SEXP linitSEXP, SEXP NetaSEXP, SEXP NepsSEXP, SEXP captureSEXP, SEXP funsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type lparam(lparamSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type linit(linitSEXP);
    Rcpp::traits::input_parameter< int >::type Neta(NetaSEXP);
    Rcpp::traits::input_parameter< int >::type Neps(NepsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type capture(captureSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type funs(funsSEXP);
    rcpp_result_gen = Rcpp::wrap(TOUCH_FUNS(lparam, linit, Neta, Neps, capture, funs));
    return rcpp_result_gen;
END_RCPP
}
// QUICKSIM
Rcpp::NumericMatrix QUICKSIM(const Rcpp::List parin, const Rcpp::NumericVector& param, const Rcpp::NumericVector& init, const Rcpp::IntegerVector& capturei, const Rcpp::List& funs, const Rcpp::NumericMatrix& data);
RcppExport SEXP mrgsolve_QUICKSIM(SEXP parinSEXP, SEXP paramSEXP, SEXP initSEXP, SEXP captureiSEXP, SEXP funsSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List >::type parin(parinSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type capturei(captureiSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type funs(funsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(QUICKSIM(parin, param, init, capturei, funs, data));
    return rcpp_result_gen;
END_RCPP
}
