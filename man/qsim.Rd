% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/qsim.R
\name{qsim}
\alias{qsim}
\alias{qsim_df}
\title{A quick simulation function}
\usage{
qsim(x, e = NULL, idata = NULL, req = NULL, tgrid = NULL,
  skip_init_calc = FALSE)

qsim_df(...)
}
\arguments{
\item{x}{model object}

\item{e}{event object}

\item{idata}{individual data set}

\item{req}{compartments to request}

\item{tgrid}{\code{tgrid} object; used if \code{e} is an \code{ev} object}

\item{skip_init_calc}{not used}

\item{...}{passed to \code{\link{qsim}}}
}
\description{
A quick simulation function
}
\details{
Use when simulating with no intervention or a simple intervention.
The rule of thumb to keep in mind with this function is that 
the timing of all events and observations is determined prior to 
the model run.  This has particular consequences for infusion
duration and lag times that might be set in \code{$MAIN}. 
Specifically, bioavailability is implemented for bolus but not 
infusion doses.  Infusion rates and durations are not modeled
from \code{$MAIN}. Dose lag times are not modeled
from \code{$MAIN}. If these features are needed or when in doubt, 
use \code{\link{mrgsim}}.
}
\examples{

mod <- mrgsolve:::house()

des <- tgrid(0,2400,1)

data <- recmatrix(ev(amt=1000, ii=24, addl=100),des)

out <- mod \%>\% qsim(data)

}
