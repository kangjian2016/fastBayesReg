% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{sim_linear_reg_multi}
\alias{sim_linear_reg_multi}
\title{Simulate data from the linear regression model with multiple outcome variables}
\usage{
sim_linear_reg_multi(
  n = 100L,
  p = 20L,
  m = 5L,
  q = 5L,
  R2 = 0.95,
  X_cor = 0.5,
  beta_size = 1
)
}
\arguments{
\item{n}{sample size}

\item{p}{number of candidate predictors}

\item{m}{number of outcome variables}

\item{q}{number of nonzero predictors}

\item{R2}{R-squared indicating the proportion of variation explained by the predictors}

\item{X_cor}{correlation between covariates}

\item{beta_size}{effect size of beta coefficients}
}
\value{
a list objects consisting of the following components
\describe{
\item{y}{vector of n outcome variables}
\item{X}{n x p matrix of candidate predictors}
\item{betacoef}{vector of p regression coeficients}
\item{R2}{R-squared indicating the proportion of variation explained by the predictors}
\item{sigma2}{noise variance}
\item{X_cor}{correlation between covariates}
}
}
\description{
Simulate data from the linear regression model with multiple outcome variables
}
\examples{
dat<-sim_linear_reg_multi(n=2500,p=200,m=5,X_cor=0.9,q=6)
summary(with(dat,lm(y~X)))
}
\author{
Jian Kang <jiankang@umich.edu>
}
