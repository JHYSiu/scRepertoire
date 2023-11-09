// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcppGetAaKmerPercent
Rcpp::NumericVector rcppGetAaKmerPercent(const std::vector<std::string>& seqs, const std::vector<std::string>& motifs, const int k);
RcppExport SEXP _scRepertoire_rcppGetAaKmerPercent(SEXP seqsSEXP, SEXP motifsSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type motifs(motifsSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppGetAaKmerPercent(seqs, motifs, k));
    return rcpp_result_gen;
END_RCPP
}
// rcppConstructBarcodeIndex
std::vector<std::vector<int>> rcppConstructBarcodeIndex(std::vector<std::string>& conDfBarcodes, std::vector<std::string> data2Barcodes);
RcppExport SEXP _scRepertoire_rcppConstructBarcodeIndex(SEXP conDfBarcodesSEXP, SEXP data2BarcodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type conDfBarcodes(conDfBarcodesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type data2Barcodes(data2BarcodesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppConstructBarcodeIndex(conDfBarcodes, data2Barcodes));
    return rcpp_result_gen;
END_RCPP
}
// rcppConstructConDfAndParseTCR
Rcpp::DataFrame rcppConstructConDfAndParseTCR(Rcpp::DataFrame& data2, std::vector<std::string> uniqueData2Barcodes);
RcppExport SEXP _scRepertoire_rcppConstructConDfAndParseTCR(SEXP data2SEXP, SEXP uniqueData2BarcodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type data2(data2SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type uniqueData2Barcodes(uniqueData2BarcodesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppConstructConDfAndParseTCR(data2, uniqueData2Barcodes));
    return rcpp_result_gen;
END_RCPP
}
// rcppGenerateUniqueNtMotifs
Rcpp::CharacterVector rcppGenerateUniqueNtMotifs(int k);
RcppExport SEXP _scRepertoire_rcppGenerateUniqueNtMotifs(SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppGenerateUniqueNtMotifs(k));
    return rcpp_result_gen;
END_RCPP
}
// rcppGetNtKmerPercent
Rcpp::NumericVector rcppGetNtKmerPercent(const std::vector<std::string>& seqs, const int k);
RcppExport SEXP _scRepertoire_rcppGetNtKmerPercent(SEXP seqsSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppGetNtKmerPercent(seqs, k));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scRepertoire_rcppGetAaKmerPercent", (DL_FUNC) &_scRepertoire_rcppGetAaKmerPercent, 3},
    {"_scRepertoire_rcppConstructBarcodeIndex", (DL_FUNC) &_scRepertoire_rcppConstructBarcodeIndex, 2},
    {"_scRepertoire_rcppConstructConDfAndParseTCR", (DL_FUNC) &_scRepertoire_rcppConstructConDfAndParseTCR, 2},
    {"_scRepertoire_rcppGenerateUniqueNtMotifs", (DL_FUNC) &_scRepertoire_rcppGenerateUniqueNtMotifs, 1},
    {"_scRepertoire_rcppGetNtKmerPercent", (DL_FUNC) &_scRepertoire_rcppGetNtKmerPercent, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_scRepertoire(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
