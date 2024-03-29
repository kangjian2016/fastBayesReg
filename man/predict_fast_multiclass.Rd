% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{predict_fast_multiclass}
\alias{predict_fast_multiclass}
\title{Prediction with fast Bayesian multinomial logistic regression fitting}
\usage{
predict_fast_multiclass(model_fit, X_test)
}
\arguments{
\item{model_fit}{output list object of fast Bayesian multinomial logistic regression fitting (see value of \link{fast_horseshoe_lm} as an example)}

\item{X_test}{\eqn{n} by \eqn{p} matrix of predictors for the test data}
}
\value{
a list object consisting of three components
\describe{
\item{class}{a vector of \eqn{n} predicted class indicators}
\item{mean}{a matrix of \eqn{n} by \eqn{K} posterior predictive mean probabilities}
}
}
\description{
Prediction with fast Bayesian multinomial logistic regression fitting
}
\examples{
dat<-sim_multiclass_reg(K=5,n=1000,p=20,X_var = 10,X_cor=0.5,q=10,
beta_size=1,intercept0=c(5,-5,-10,-10))
train_idx = 1:round(length(dat$y)/2)
test_idx = setdiff(1:length(dat$y),train_idx)
res <- fast_normal_multiclass(dat$y[train_idx],dat$X[train_idx,])
pred_res <- predict_fast_multiclass(res,dat$X[test_idx,])
mean(pred_res$class!=dat$y[test_idx])
}
\author{
Jian Kang <jiankang@umich.edu>
}
