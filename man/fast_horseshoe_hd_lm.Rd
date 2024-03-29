% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{fast_horseshoe_hd_lm}
\alias{fast_horseshoe_hd_lm}
\title{Fast Bayesian high-dimensional linear regression with horseshoe priors}
\usage{
fast_horseshoe_hd_lm(
  y,
  X,
  mcmc_sample = 500L,
  burnin = 500L,
  thinning = 1L,
  a_sigma = 0,
  b_sigma = 0,
  A_tau = 1,
  A_lambda = 1
)
}
\arguments{
\item{y}{vector of n outcome variables}

\item{X}{n x p matrix of candidate predictors}

\item{mcmc_sample}{number of MCMC iterations saved}

\item{burnin}{number of iterations before start to save}

\item{thinning}{number of iterations to skip between two saved iterations}

\item{a_sigma}{shape parameter in the inverse gamma prior of the noise variance}

\item{b_sigma}{rate parameter in the inverse gamma prior of the noise variance}

\item{A_tau}{scale parameter in the half Cauchy prior of the global shrinkage parameter}

\item{A_lambda}{scale parameter in the half Cauchy prior of the local shrinkage parameter}
}
\value{
a list object consisting of two components
\describe{
\item{post_mean}{a list object of four components for posterior mean statistics}
\describe{
\item{mu}{a vector of posterior predictive mean of the n training sample}
\item{betacoef}{a vector of posterior mean of p regression coeficients}
\item{lambda}{a vector of posterior mean of p local shrinkage parameters}
\item{sigma2_eps}{posterior mean of the noise variance}
\item{b_lambda}{posterior mean of the rate parameter in the prior for local shrinkage parameters}
\item{tau2}{posterior mean of the global parameter}
}
\item{mcmc}{a list object of three components for MCMC samples}
\describe{
\item{betacoef}{a matrix of MCMC samples of p regression coeficients}
\item{lambda}{a matrix of MCMC samples of p local shrinkage parameters}
\item{sigma2_eps}{a vector of MCMC samples of the noise variance}
\item{b_lambda}{a vector of MCMC samples of the rate parameter in the prior for local shrinkage parameters}
\item{tau2}{a vector of MCMC samples of the global shrinkage parameter}
}
}
}
\description{
Fast Bayesian high-dimensional linear regression with horseshoe priors
}
\examples{
set.seed(2022)
dat1 <- sim_linear_reg(n=2000,p=200,X_cor=0.9,q=6)
res1 <- with(dat1,fast_horseshoe_ss_lm(y,X))
dat2 <- sim_linear_reg(n=200,p=2000,X_cor=0.9,q=6)
res2 <- with(dat2,fast_horseshoe_ss_lm(y,X))
tab <- data.frame(rbind(comp_sparse_SSE(dat1$betacoef,res1$post_mean$betacoef),
comp_sparse_SSE(dat2$betacoef,res2$post_mean$betacoef)),
time=c(res1$elapsed,res2$elapsed))
rownames(tab)<-c("n = 2000, p = 200","n = 200, p = 2000")
fast_horseshoe_tab <- tab
print(fast_horseshoe_tab)
}
\author{
Jian Kang <jiankang@umich.edu>
}
