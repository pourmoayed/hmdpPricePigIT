// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// pNorm1D
SEXP pNorm1D(NumericVector x, double mean, double sd);
RcppExport SEXP _hmdpPricePigIT_pNorm1D(SEXP xSEXP, SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(pNorm1D(x, mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// pNorm2D_arma
double pNorm2D_arma(arma::vec lower, arma::vec upper, arma::vec mean, arma::mat sigma);
RcppExport SEXP _hmdpPricePigIT_pNorm2D_arma(SEXP lowerSEXP, SEXP upperSEXP, SEXP meanSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(pNorm2D_arma(lower, upper, mean, sigma));
    return rcpp_result_gen;
END_RCPP
}
// pNorm2D
double pNorm2D(NumericVector lower, NumericVector upper, NumericVector mean, NumericMatrix sigma);
RcppExport SEXP _hmdpPricePigIT_pNorm2D(SEXP lowerSEXP, SEXP upperSEXP, SEXP meanSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(pNorm2D(lower, upper, mean, sigma));
    return rcpp_result_gen;
END_RCPP
}
// BuildHMDP2
SEXP BuildHMDP2(const CharacterVector filePrefix, const List param, const List paramDLMP, const List paramDLMPi, const List paramDLMF, const List paramPolicy);
RcppExport SEXP _hmdpPricePigIT_BuildHMDP2(SEXP filePrefixSEXP, SEXP paramSEXP, SEXP paramDLMPSEXP, SEXP paramDLMPiSEXP, SEXP paramDLMFSEXP, SEXP paramPolicySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector >::type filePrefix(filePrefixSEXP);
    Rcpp::traits::input_parameter< const List >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const List >::type paramDLMP(paramDLMPSEXP);
    Rcpp::traits::input_parameter< const List >::type paramDLMPi(paramDLMPiSEXP);
    Rcpp::traits::input_parameter< const List >::type paramDLMF(paramDLMFSEXP);
    Rcpp::traits::input_parameter< const List >::type paramPolicy(paramPolicySEXP);
    rcpp_result_gen = Rcpp::wrap(BuildHMDP2(filePrefix, param, paramDLMP, paramDLMPi, paramDLMF, paramPolicy));
    return rcpp_result_gen;
END_RCPP
}
// BuildHMDP2Deterministic
SEXP BuildHMDP2Deterministic(const CharacterVector filePrefix, const List param, const List paramDLMP, const List paramDLMPi, const List paramDLMF, const List paramPolicy);
RcppExport SEXP _hmdpPricePigIT_BuildHMDP2Deterministic(SEXP filePrefixSEXP, SEXP paramSEXP, SEXP paramDLMPSEXP, SEXP paramDLMPiSEXP, SEXP paramDLMFSEXP, SEXP paramPolicySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector >::type filePrefix(filePrefixSEXP);
    Rcpp::traits::input_parameter< const List >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const List >::type paramDLMP(paramDLMPSEXP);
    Rcpp::traits::input_parameter< const List >::type paramDLMPi(paramDLMPiSEXP);
    Rcpp::traits::input_parameter< const List >::type paramDLMF(paramDLMFSEXP);
    Rcpp::traits::input_parameter< const List >::type paramPolicy(paramPolicySEXP);
    rcpp_result_gen = Rcpp::wrap(BuildHMDP2Deterministic(filePrefix, param, paramDLMP, paramDLMPi, paramDLMF, paramPolicy));
    return rcpp_result_gen;
END_RCPP
}
// SimulatePigs
SEXP SimulatePigs(const int& pigs, const int& samples, const int& weeks, const arma::vec& prices, const arma::mat& V, const arma::mat& B, const arma::mat& R);
RcppExport SEXP _hmdpPricePigIT_SimulatePigs(SEXP pigsSEXP, SEXP samplesSEXP, SEXP weeksSEXP, SEXP pricesSEXP, SEXP VSEXP, SEXP BSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type pigs(pigsSEXP);
    Rcpp::traits::input_parameter< const int& >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const int& >::type weeks(weeksSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type prices(pricesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(SimulatePigs(pigs, samples, weeks, prices, V, B, R));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_hmdpPricePigIT_pNorm1D", (DL_FUNC) &_hmdpPricePigIT_pNorm1D, 3},
    {"_hmdpPricePigIT_pNorm2D_arma", (DL_FUNC) &_hmdpPricePigIT_pNorm2D_arma, 4},
    {"_hmdpPricePigIT_pNorm2D", (DL_FUNC) &_hmdpPricePigIT_pNorm2D, 4},
    {"_hmdpPricePigIT_BuildHMDP2", (DL_FUNC) &_hmdpPricePigIT_BuildHMDP2, 6},
    {"_hmdpPricePigIT_BuildHMDP2Deterministic", (DL_FUNC) &_hmdpPricePigIT_BuildHMDP2Deterministic, 6},
    {"_hmdpPricePigIT_SimulatePigs", (DL_FUNC) &_hmdpPricePigIT_SimulatePigs, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_hmdpPricePigIT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
