// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cor2cor
arma::mat cor2cor(const arma::mat& X, int CASE);
RcppExport SEXP _bigsimr_cor2cor(SEXP XSEXP, SEXP CASESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type CASE(CASESEXP);
    rcpp_result_gen = Rcpp::wrap(cor2cor(X, CASE));
    return rcpp_result_gen;
END_RCPP
}
// hermite
arma::vec hermite(const arma::vec& x, int n);
RcppExport SEXP _bigsimr_hermite(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(hermite(x, n));
    return rcpp_result_gen;
END_RCPP
}
// nearPDcor
arma::mat nearPDcor(arma::mat G);
RcppExport SEXP _bigsimr_nearPDcor(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(nearPDcor(G));
    return rcpp_result_gen;
END_RCPP
}
// rcor
arma::mat rcor(int d, int k);
RcppExport SEXP _bigsimr_rcor(SEXP dSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rcor(d, k));
    return rcpp_result_gen;
END_RCPP
}
// rmvn
arma::mat rmvn(int n, arma::colvec mu, arma::mat sigma);
RcppExport SEXP _bigsimr_rmvn(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvn(n, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// rmvuu
arma::mat rmvuu(int n, arma::mat rho);
RcppExport SEXP _bigsimr_rmvuu(SEXP nSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvuu(n, rho));
    return rcpp_result_gen;
END_RCPP
}
// rmvu
arma::mat rmvu(int n, arma::mat rho, arma::rowvec min, arma::rowvec max);
RcppExport SEXP _bigsimr_rmvu(SEXP nSEXP, SEXP rhoSEXP, SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type min(minSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvu(n, rho, min, max));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bigsimr_cor2cor", (DL_FUNC) &_bigsimr_cor2cor, 2},
    {"_bigsimr_hermite", (DL_FUNC) &_bigsimr_hermite, 2},
    {"_bigsimr_nearPDcor", (DL_FUNC) &_bigsimr_nearPDcor, 1},
    {"_bigsimr_rcor", (DL_FUNC) &_bigsimr_rcor, 2},
    {"_bigsimr_rmvn", (DL_FUNC) &_bigsimr_rmvn, 3},
    {"_bigsimr_rmvuu", (DL_FUNC) &_bigsimr_rmvuu, 2},
    {"_bigsimr_rmvu", (DL_FUNC) &_bigsimr_rmvu, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_bigsimr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
