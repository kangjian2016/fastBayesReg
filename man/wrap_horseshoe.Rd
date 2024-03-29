% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/fastBayesReg.R
\name{wrap_horseshoe}
\alias{wrap_horseshoe}
\title{Quick call the horseshoe function in horseshoe package}
\usage{
wrap_horseshoe(
  y,
  X,
  method.tau = "halfCauchy",
  burn = 500,
  nmc = 500,
  thin = 1,
  method.sigma = "Jeffreys",
  ...
)
}
\arguments{
\item{y}{vector of n outcome variables}

\item{X}{n x p matrix of candidate predictors}

\item{method.tau}{method for handling \eqn{\tau}. Select "truncatedCauchy" for full Bayes with the Cauchy prior truncated to \eqn{[1/p, 1]}, "halfCauchy" for full Bayes with the half-Cauchy prior, or "fixed" to use a fixed value (an empirical Bayes estimate, for example).}

\item{burn}{number of iterations before start to save}

\item{nmc}{number of MCMC iterations saved}

\item{thin}{number of iterations to skip between two saved iterations}

\item{method.sigma}{method for handling \eqn{\sigma^{2}}{\sigma^2}. Select "Jeffreys" for full Bayes with Jeffrey's prior on the error variance \eqn{\sigma^{2}}{\sigma^2}, or "fixed" to use a fixed value (an empirical Bayes estimate, for example).}

\item{...}{other parameters (see \link{horseshoe})}
}
\value{
a list of object consisting of two components
\describe{
\item{betacoef}{a vector of posterior mean of \eqn{p} regression coeficients}
\item{elapsed}{running time}
}
}
\description{
Quick call the horseshoe function in horseshoe package
}
\examples{
dat <- sim_linear_reg(n=200,p=2000,X_cor=0.9,q=6)
res <- with(dat,wrap_horseshoe(y,X))
print(comp_sparse_SSE(dat$betacoef,res$betacoef))
print(res$elapsed)
}
\author{
Jian Kang <jiankang@umich.edu>
}
