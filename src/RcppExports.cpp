// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// uiLevenshteinDistance
size_t uiLevenshteinDistance(const std::string& s1, const std::string& s2);
RcppExport SEXP authGraph_uiLevenshteinDistance(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< const std::string& >::type s2(s2SEXP);
    __result = Rcpp::wrap(uiLevenshteinDistance(s1, s2));
    return __result;
END_RCPP
}
// levVectors
IntegerVector levVectors(CharacterVector x, CharacterVector y);
RcppExport SEXP authGraph_levVectors(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type y(ySEXP);
    __result = Rcpp::wrap(levVectors(x, y));
    return __result;
END_RCPP
}