// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cor_convert_double
double cor_convert_double(double X, int CASE);
RcppExport SEXP _bigsimr_cor_convert_double(SEXP XSEXP, SEXP CASESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type CASE(CASESEXP);
    rcpp_result_gen = Rcpp::wrap(cor_convert_double(X, CASE));
    return rcpp_result_gen;
END_RCPP
}
// cor_convert_matrix
arma::mat cor_convert_matrix(const arma::mat& X, int CASE);
RcppExport SEXP _bigsimr_cor_convert_matrix(SEXP XSEXP, SEXP CASESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type CASE(CASESEXP);
    rcpp_result_gen = Rcpp::wrap(cor_convert_matrix(X, CASE));
    return rcpp_result_gen;
END_RCPP
}
// cor_nearPSD
arma::mat cor_nearPSD(arma::mat G, double tau, int iter_outer, int iter_inner, int maxit, double err_tol, double precg_err_tol, double newton_err_tol);
RcppExport SEXP _bigsimr_cor_nearPSD(SEXP GSEXP, SEXP tauSEXP, SEXP iter_outerSEXP, SEXP iter_innerSEXP, SEXP maxitSEXP, SEXP err_tolSEXP, SEXP precg_err_tolSEXP, SEXP newton_err_tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< int >::type iter_outer(iter_outerSEXP);
    Rcpp::traits::input_parameter< int >::type iter_inner(iter_innerSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< double >::type err_tol(err_tolSEXP);
    Rcpp::traits::input_parameter< double >::type precg_err_tol(precg_err_tolSEXP);
    Rcpp::traits::input_parameter< double >::type newton_err_tol(newton_err_tolSEXP);
    rcpp_result_gen = Rcpp::wrap(cor_nearPSD(G, tau, iter_outer, iter_inner, maxit, err_tol, precg_err_tol, newton_err_tol));
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

static const R_CallMethodDef CallEntries[] = {
    {"_bigsimr_cor_convert_double", (DL_FUNC) &_bigsimr_cor_convert_double, 2},
    {"_bigsimr_cor_convert_matrix", (DL_FUNC) &_bigsimr_cor_convert_matrix, 2},
    {"_bigsimr_cor_nearPSD", (DL_FUNC) &_bigsimr_cor_nearPSD, 8},
    {"_bigsimr_hermite", (DL_FUNC) &_bigsimr_hermite, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_bigsimr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
