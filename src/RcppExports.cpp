// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/fastBayesReg.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// log1mexpm
arma::vec log1mexpm(arma::vec& x);
static SEXP _fastBayesReg_log1mexpm_try(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(log1mexpm(x));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_log1mexpm(SEXP xSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_log1mexpm_try(xSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// log1pexp
arma::vec log1pexp(arma::vec& x);
static SEXP _fastBayesReg_log1pexp_try(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(log1pexp(x));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_log1pexp(SEXP xSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_log1pexp_try(xSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// sim_linear_reg
Rcpp::List sim_linear_reg(int n, int p, int q, double R2, double X_cor, double beta_size);
static SEXP _fastBayesReg_sim_linear_reg_try(SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP R2SEXP, SEXP X_corSEXP, SEXP beta_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type R2(R2SEXP);
    Rcpp::traits::input_parameter< double >::type X_cor(X_corSEXP);
    Rcpp::traits::input_parameter< double >::type beta_size(beta_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_linear_reg(n, p, q, R2, X_cor, beta_size));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_sim_linear_reg(SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP R2SEXP, SEXP X_corSEXP, SEXP beta_sizeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_sim_linear_reg_try(nSEXP, pSEXP, qSEXP, R2SEXP, X_corSEXP, beta_sizeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// sim_logit_reg
Rcpp::List sim_logit_reg(int n, int p, int q, double X_cor, double X_var, double beta_size);
static SEXP _fastBayesReg_sim_logit_reg_try(SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP X_corSEXP, SEXP X_varSEXP, SEXP beta_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type X_cor(X_corSEXP);
    Rcpp::traits::input_parameter< double >::type X_var(X_varSEXP);
    Rcpp::traits::input_parameter< double >::type beta_size(beta_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_logit_reg(n, p, q, X_cor, X_var, beta_size));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_sim_logit_reg(SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP X_corSEXP, SEXP X_varSEXP, SEXP beta_sizeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_sim_logit_reg_try(nSEXP, pSEXP, qSEXP, X_corSEXP, X_varSEXP, beta_sizeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// fast_normal_lm
Rcpp::List fast_normal_lm(arma::vec& y, arma::mat& X, int mcmc_sample, int burnin, int thinning, double a_sigma, double b_sigma, double A_tau);
static SEXP _fastBayesReg_fast_normal_lm_try(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP a_sigmaSEXP, SEXP b_sigmaSEXP, SEXP A_tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type mcmc_sample(mcmc_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thinning(thinningSEXP);
    Rcpp::traits::input_parameter< double >::type a_sigma(a_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type b_sigma(b_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type A_tau(A_tauSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_normal_lm(y, X, mcmc_sample, burnin, thinning, a_sigma, b_sigma, A_tau));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_fast_normal_lm(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP a_sigmaSEXP, SEXP b_sigmaSEXP, SEXP A_tauSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_fast_normal_lm_try(ySEXP, XSEXP, mcmc_sampleSEXP, burninSEXP, thinningSEXP, a_sigmaSEXP, b_sigmaSEXP, A_tauSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// fast_normal_logit
Rcpp::List fast_normal_logit(arma::vec& y, arma::mat& X, int mcmc_sample, int burnin, int thinning, double a_sigma, double b_sigma, double A_tau);
static SEXP _fastBayesReg_fast_normal_logit_try(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP a_sigmaSEXP, SEXP b_sigmaSEXP, SEXP A_tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type mcmc_sample(mcmc_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thinning(thinningSEXP);
    Rcpp::traits::input_parameter< double >::type a_sigma(a_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type b_sigma(b_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type A_tau(A_tauSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_normal_logit(y, X, mcmc_sample, burnin, thinning, a_sigma, b_sigma, A_tau));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_fast_normal_logit(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP a_sigmaSEXP, SEXP b_sigmaSEXP, SEXP A_tauSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_fast_normal_logit_try(ySEXP, XSEXP, mcmc_sampleSEXP, burninSEXP, thinningSEXP, a_sigmaSEXP, b_sigmaSEXP, A_tauSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// fast_horseshoe_logit
Rcpp::List fast_horseshoe_logit(arma::vec& y, arma::mat& X, int mcmc_sample, int burnin, int thinning, double A_tau, double A_lambda);
static SEXP _fastBayesReg_fast_horseshoe_logit_try(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP A_tauSEXP, SEXP A_lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type mcmc_sample(mcmc_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thinning(thinningSEXP);
    Rcpp::traits::input_parameter< double >::type A_tau(A_tauSEXP);
    Rcpp::traits::input_parameter< double >::type A_lambda(A_lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_horseshoe_logit(y, X, mcmc_sample, burnin, thinning, A_tau, A_lambda));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_fast_horseshoe_logit(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP A_tauSEXP, SEXP A_lambdaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_fast_horseshoe_logit_try(ySEXP, XSEXP, mcmc_sampleSEXP, burninSEXP, thinningSEXP, A_tauSEXP, A_lambdaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rand_left_trucnorm0
arma::vec rand_left_trucnorm0(int n, double lower, double ratio);
static SEXP _fastBayesReg_rand_left_trucnorm0_try(SEXP nSEXP, SEXP lowerSEXP, SEXP ratioSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type ratio(ratioSEXP);
    rcpp_result_gen = Rcpp::wrap(rand_left_trucnorm0(n, lower, ratio));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_rand_left_trucnorm0(SEXP nSEXP, SEXP lowerSEXP, SEXP ratioSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_rand_left_trucnorm0_try(nSEXP, lowerSEXP, ratioSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rand_left_trucnorm
arma::vec rand_left_trucnorm(int n, double mu, double sigma, double lower, double ratio);
static SEXP _fastBayesReg_rand_left_trucnorm_try(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP lowerSEXP, SEXP ratioSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type ratio(ratioSEXP);
    rcpp_result_gen = Rcpp::wrap(rand_left_trucnorm(n, mu, sigma, lower, ratio));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_rand_left_trucnorm(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP lowerSEXP, SEXP ratioSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_rand_left_trucnorm_try(nSEXP, muSEXP, sigmaSEXP, lowerSEXP, ratioSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// rand_right_trucnorm
arma::vec rand_right_trucnorm(int n, double mu, double sigma, double upper, double ratio);
static SEXP _fastBayesReg_rand_right_trucnorm_try(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP upperSEXP, SEXP ratioSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< double >::type ratio(ratioSEXP);
    rcpp_result_gen = Rcpp::wrap(rand_right_trucnorm(n, mu, sigma, upper, ratio));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_rand_right_trucnorm(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP upperSEXP, SEXP ratioSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_rand_right_trucnorm_try(nSEXP, muSEXP, sigmaSEXP, upperSEXP, ratioSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// fast_horseshoe_lm
Rcpp::List fast_horseshoe_lm(arma::vec& y, arma::mat& X, int mcmc_sample, int burnin, int thinning, double a_sigma, double b_sigma, double A_tau, double A_lambda);
static SEXP _fastBayesReg_fast_horseshoe_lm_try(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP a_sigmaSEXP, SEXP b_sigmaSEXP, SEXP A_tauSEXP, SEXP A_lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type mcmc_sample(mcmc_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thinning(thinningSEXP);
    Rcpp::traits::input_parameter< double >::type a_sigma(a_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type b_sigma(b_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type A_tau(A_tauSEXP);
    Rcpp::traits::input_parameter< double >::type A_lambda(A_lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_horseshoe_lm(y, X, mcmc_sample, burnin, thinning, a_sigma, b_sigma, A_tau, A_lambda));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_fast_horseshoe_lm(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP a_sigmaSEXP, SEXP b_sigmaSEXP, SEXP A_tauSEXP, SEXP A_lambdaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_fast_horseshoe_lm_try(ySEXP, XSEXP, mcmc_sampleSEXP, burninSEXP, thinningSEXP, a_sigmaSEXP, b_sigmaSEXP, A_tauSEXP, A_lambdaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// fast_horseshoe_ss_lm
Rcpp::List fast_horseshoe_ss_lm(arma::vec& y, arma::mat& X, int mcmc_sample, int burnin, int thinning, double a_sigma, double b_sigma, double A_tau, double A_lambda);
static SEXP _fastBayesReg_fast_horseshoe_ss_lm_try(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP a_sigmaSEXP, SEXP b_sigmaSEXP, SEXP A_tauSEXP, SEXP A_lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type mcmc_sample(mcmc_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thinning(thinningSEXP);
    Rcpp::traits::input_parameter< double >::type a_sigma(a_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type b_sigma(b_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type A_tau(A_tauSEXP);
    Rcpp::traits::input_parameter< double >::type A_lambda(A_lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_horseshoe_ss_lm(y, X, mcmc_sample, burnin, thinning, a_sigma, b_sigma, A_tau, A_lambda));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_fast_horseshoe_ss_lm(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP a_sigmaSEXP, SEXP b_sigmaSEXP, SEXP A_tauSEXP, SEXP A_lambdaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_fast_horseshoe_ss_lm_try(ySEXP, XSEXP, mcmc_sampleSEXP, burninSEXP, thinningSEXP, a_sigmaSEXP, b_sigmaSEXP, A_tauSEXP, A_lambdaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// fast_horseshoe_hd_lm
Rcpp::List fast_horseshoe_hd_lm(arma::vec& y, arma::mat& X, int mcmc_sample, int burnin, int thinning, double a_sigma, double b_sigma, double A_tau, double A_lambda);
static SEXP _fastBayesReg_fast_horseshoe_hd_lm_try(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP a_sigmaSEXP, SEXP b_sigmaSEXP, SEXP A_tauSEXP, SEXP A_lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type mcmc_sample(mcmc_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thinning(thinningSEXP);
    Rcpp::traits::input_parameter< double >::type a_sigma(a_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type b_sigma(b_sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type A_tau(A_tauSEXP);
    Rcpp::traits::input_parameter< double >::type A_lambda(A_lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_horseshoe_hd_lm(y, X, mcmc_sample, burnin, thinning, a_sigma, b_sigma, A_tau, A_lambda));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_fast_horseshoe_hd_lm(SEXP ySEXP, SEXP XSEXP, SEXP mcmc_sampleSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP a_sigmaSEXP, SEXP b_sigmaSEXP, SEXP A_tauSEXP, SEXP A_lambdaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_fast_horseshoe_hd_lm_try(ySEXP, XSEXP, mcmc_sampleSEXP, burninSEXP, thinningSEXP, a_sigmaSEXP, b_sigmaSEXP, A_tauSEXP, A_lambdaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// predict_fast_lm
Rcpp::List predict_fast_lm(Rcpp::List& model_fit, arma::mat& X_test, double alpha);
static SEXP _fastBayesReg_predict_fast_lm_try(SEXP model_fitSEXP, SEXP X_testSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type model_fit(model_fitSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X_test(X_testSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_fast_lm(model_fit, X_test, alpha));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_predict_fast_lm(SEXP model_fitSEXP, SEXP X_testSEXP, SEXP alphaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_predict_fast_lm_try(model_fitSEXP, X_testSEXP, alphaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// predict_fast_logit
Rcpp::List predict_fast_logit(Rcpp::List& model_fit, arma::mat& X_test, double alpha, double cutoff);
static SEXP _fastBayesReg_predict_fast_logit_try(SEXP model_fitSEXP, SEXP X_testSEXP, SEXP alphaSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type model_fit(model_fitSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X_test(X_testSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_fast_logit(model_fit, X_test, alpha, cutoff));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _fastBayesReg_predict_fast_logit(SEXP model_fitSEXP, SEXP X_testSEXP, SEXP alphaSEXP, SEXP cutoffSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_fastBayesReg_predict_fast_logit_try(model_fitSEXP, X_testSEXP, alphaSEXP, cutoffSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _fastBayesReg_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("arma::vec(*log1mexpm)(arma::vec&)");
        signatures.insert("arma::vec(*log1pexp)(arma::vec&)");
        signatures.insert("Rcpp::List(*sim_linear_reg)(int,int,int,double,double,double)");
        signatures.insert("Rcpp::List(*sim_logit_reg)(int,int,int,double,double,double)");
        signatures.insert("Rcpp::List(*fast_normal_lm)(arma::vec&,arma::mat&,int,int,int,double,double,double)");
        signatures.insert("Rcpp::List(*fast_normal_logit)(arma::vec&,arma::mat&,int,int,int,double,double,double)");
        signatures.insert("Rcpp::List(*fast_horseshoe_logit)(arma::vec&,arma::mat&,int,int,int,double,double)");
        signatures.insert("arma::vec(*rand_left_trucnorm0)(int,double,double)");
        signatures.insert("arma::vec(*rand_left_trucnorm)(int,double,double,double,double)");
        signatures.insert("arma::vec(*rand_right_trucnorm)(int,double,double,double,double)");
        signatures.insert("Rcpp::List(*fast_horseshoe_lm)(arma::vec&,arma::mat&,int,int,int,double,double,double,double)");
        signatures.insert("Rcpp::List(*fast_horseshoe_ss_lm)(arma::vec&,arma::mat&,int,int,int,double,double,double,double)");
        signatures.insert("Rcpp::List(*fast_horseshoe_hd_lm)(arma::vec&,arma::mat&,int,int,int,double,double,double,double)");
        signatures.insert("Rcpp::List(*predict_fast_lm)(Rcpp::List&,arma::mat&,double)");
        signatures.insert("Rcpp::List(*predict_fast_logit)(Rcpp::List&,arma::mat&,double,double)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _fastBayesReg_RcppExport_registerCCallable() { 
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_log1mexpm", (DL_FUNC)_fastBayesReg_log1mexpm_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_log1pexp", (DL_FUNC)_fastBayesReg_log1pexp_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_sim_linear_reg", (DL_FUNC)_fastBayesReg_sim_linear_reg_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_sim_logit_reg", (DL_FUNC)_fastBayesReg_sim_logit_reg_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_fast_normal_lm", (DL_FUNC)_fastBayesReg_fast_normal_lm_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_fast_normal_logit", (DL_FUNC)_fastBayesReg_fast_normal_logit_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_fast_horseshoe_logit", (DL_FUNC)_fastBayesReg_fast_horseshoe_logit_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_rand_left_trucnorm0", (DL_FUNC)_fastBayesReg_rand_left_trucnorm0_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_rand_left_trucnorm", (DL_FUNC)_fastBayesReg_rand_left_trucnorm_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_rand_right_trucnorm", (DL_FUNC)_fastBayesReg_rand_right_trucnorm_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_fast_horseshoe_lm", (DL_FUNC)_fastBayesReg_fast_horseshoe_lm_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_fast_horseshoe_ss_lm", (DL_FUNC)_fastBayesReg_fast_horseshoe_ss_lm_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_fast_horseshoe_hd_lm", (DL_FUNC)_fastBayesReg_fast_horseshoe_hd_lm_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_predict_fast_lm", (DL_FUNC)_fastBayesReg_predict_fast_lm_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_predict_fast_logit", (DL_FUNC)_fastBayesReg_predict_fast_logit_try);
    R_RegisterCCallable("fastBayesReg", "_fastBayesReg_RcppExport_validate", (DL_FUNC)_fastBayesReg_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastBayesReg_log1mexpm", (DL_FUNC) &_fastBayesReg_log1mexpm, 1},
    {"_fastBayesReg_log1pexp", (DL_FUNC) &_fastBayesReg_log1pexp, 1},
    {"_fastBayesReg_sim_linear_reg", (DL_FUNC) &_fastBayesReg_sim_linear_reg, 6},
    {"_fastBayesReg_sim_logit_reg", (DL_FUNC) &_fastBayesReg_sim_logit_reg, 6},
    {"_fastBayesReg_fast_normal_lm", (DL_FUNC) &_fastBayesReg_fast_normal_lm, 8},
    {"_fastBayesReg_fast_normal_logit", (DL_FUNC) &_fastBayesReg_fast_normal_logit, 8},
    {"_fastBayesReg_fast_horseshoe_logit", (DL_FUNC) &_fastBayesReg_fast_horseshoe_logit, 7},
    {"_fastBayesReg_rand_left_trucnorm0", (DL_FUNC) &_fastBayesReg_rand_left_trucnorm0, 3},
    {"_fastBayesReg_rand_left_trucnorm", (DL_FUNC) &_fastBayesReg_rand_left_trucnorm, 5},
    {"_fastBayesReg_rand_right_trucnorm", (DL_FUNC) &_fastBayesReg_rand_right_trucnorm, 5},
    {"_fastBayesReg_fast_horseshoe_lm", (DL_FUNC) &_fastBayesReg_fast_horseshoe_lm, 9},
    {"_fastBayesReg_fast_horseshoe_ss_lm", (DL_FUNC) &_fastBayesReg_fast_horseshoe_ss_lm, 9},
    {"_fastBayesReg_fast_horseshoe_hd_lm", (DL_FUNC) &_fastBayesReg_fast_horseshoe_hd_lm, 9},
    {"_fastBayesReg_predict_fast_lm", (DL_FUNC) &_fastBayesReg_predict_fast_lm, 3},
    {"_fastBayesReg_predict_fast_logit", (DL_FUNC) &_fastBayesReg_predict_fast_logit, 4},
    {"_fastBayesReg_RcppExport_registerCCallable", (DL_FUNC) &_fastBayesReg_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastBayesReg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
