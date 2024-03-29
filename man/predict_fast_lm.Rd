% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{predict_fast_lm}
\alias{predict_fast_lm}
\title{Prediction with fast Bayesian linear regression fitting}
\usage{
predict_fast_lm(model_fit, X_test, alpha = 0.95)
}
\arguments{
\item{model_fit}{output list object of fast Bayesian linear regression fitting (see value of \link{fast_horseshoe_lm} as an example)}

\item{X_test}{\eqn{n} by \eqn{p} matrix of predictors for the test data}

\item{alpha}{posterior predictive credible level \eqn{\alpha \in (0,1)}. The default value is \eqn{0.95}.}
}
\value{
a list object consisting of three components
\describe{
\item{mean}{a vector of \eqn{n} posterior predictive mean values}
\item{ucl}{a vector of \eqn{n}  posterior \eqn{\alpha} level upper credible limits}
\item{lcl}{a vector of \eqn{n}  posterior \eqn{\alpha} level lower credible limits}
\item{median}{a vector of \eqn{n}  posterior predictive median values}
\item{sd}{a vector of \eqn{n}  posterior predictive standard deviation values}
}
}
\description{
Prediction with fast Bayesian linear regression fitting
}
\examples{
dat <- sim_linear_reg(n=2000,p=200,X_cor=0.9,q=6)
train_idx = 1:round(length(dat$y)/2)
test_idx = setdiff(1:length(dat$y),train_idx)
res <- fast_horseshoe_lm(dat$y[train_idx],dat$X[train_idx,])
pred_res <- predict_fast_lm(res,dat$X[test_idx,])
plot(dat$y[test_idx,],pred_res$mean,
type="p",pch=19,cex=0.5,col="blue",asp=1,xlab="Observations",
ylab = "Predictions")
abline(0,1)
}
\author{
Jian Kang <jiankang@umich.edu>
}
