// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// asyncMean
void asyncMean(Rcpp::NumericVector data);
RcppExport SEXP laterTest_asyncMean(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type data(dataSEXP);
    asyncMean(data);
    return R_NilValue;
END_RCPP
}
// sayLater
void sayLater(std::string message, double delay);
RcppExport SEXP laterTest_sayLater(SEXP messageSEXP, SEXP delaySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type message(messageSEXP);
    Rcpp::traits::input_parameter< double >::type delay(delaySEXP);
    sayLater(message, delay);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"laterTest_asyncMean", (DL_FUNC) &laterTest_asyncMean, 1},
    {"laterTest_sayLater", (DL_FUNC) &laterTest_sayLater, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_laterTest(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}