// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "flowCore_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// biexponential_transform
std::vector<double> biexponential_transform(std::vector<double> input, double A, double B, double C, double D, double F, double W, double tol, int maxIt);
RcppExport SEXP _flowCore_biexponential_transform(SEXP inputSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP DSEXP, SEXP FSEXP, SEXP WSEXP, SEXP tolSEXP, SEXP maxItSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type input(inputSEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type C(CSEXP);
    Rcpp::traits::input_parameter< double >::type D(DSEXP);
    Rcpp::traits::input_parameter< double >::type F(FSEXP);
    Rcpp::traits::input_parameter< double >::type W(WSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxIt(maxItSEXP);
    rcpp_result_gen = Rcpp::wrap(biexponential_transform(input, A, B, C, D, F, W, tol, maxIt));
    return rcpp_result_gen;
END_RCPP
}
// convertRawBytes
std::vector<double> convertRawBytes(BYTES bytes, bool isInt, std::vector<unsigned short> colSize, unsigned short ncol, bool isBigEndian);
RcppExport SEXP _flowCore_convertRawBytes(SEXP bytesSEXP, SEXP isIntSEXP, SEXP colSizeSEXP, SEXP ncolSEXP, SEXP isBigEndianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< BYTES >::type bytes(bytesSEXP);
    Rcpp::traits::input_parameter< bool >::type isInt(isIntSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned short> >::type colSize(colSizeSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< bool >::type isBigEndian(isBigEndianSEXP);
    rcpp_result_gen = Rcpp::wrap(convertRawBytes(bytes, isInt, colSize, ncol, isBigEndian));
    return rcpp_result_gen;
END_RCPP
}
// parseFCS
Rcpp::XPtr<MyMemCytoFrame> parseFCS(string filename, string transformation, float decades, bool truncate_min_val, float min_limit, bool truncate_max_range, int dataset, bool emptyValue, bool ignoreTextOffset, bool onlyTxt, int num_threads);
RcppExport SEXP _flowCore_parseFCS(SEXP filenameSEXP, SEXP transformationSEXP, SEXP decadesSEXP, SEXP truncate_min_valSEXP, SEXP min_limitSEXP, SEXP truncate_max_rangeSEXP, SEXP datasetSEXP, SEXP emptyValueSEXP, SEXP ignoreTextOffsetSEXP, SEXP onlyTxtSEXP, SEXP num_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< string >::type transformation(transformationSEXP);
    Rcpp::traits::input_parameter< float >::type decades(decadesSEXP);
    Rcpp::traits::input_parameter< bool >::type truncate_min_val(truncate_min_valSEXP);
    Rcpp::traits::input_parameter< float >::type min_limit(min_limitSEXP);
    Rcpp::traits::input_parameter< bool >::type truncate_max_range(truncate_max_rangeSEXP);
    Rcpp::traits::input_parameter< int >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< bool >::type emptyValue(emptyValueSEXP);
    Rcpp::traits::input_parameter< bool >::type ignoreTextOffset(ignoreTextOffsetSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyTxt(onlyTxtSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(parseFCS(filename, transformation, decades, truncate_min_val, min_limit, truncate_max_range, dataset, emptyValue, ignoreTextOffset, onlyTxt, num_threads));
    return rcpp_result_gen;
END_RCPP
}
// getData
NumericVector getData(Rcpp::XPtr<MyMemCytoFrame> fr);
RcppExport SEXP _flowCore_getData(SEXP frSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<MyMemCytoFrame> >::type fr(frSEXP);
    rcpp_result_gen = Rcpp::wrap(getData(fr));
    return rcpp_result_gen;
END_RCPP
}
// getKeyword
string getKeyword(Rcpp::XPtr<MyMemCytoFrame> fr, string key);
RcppExport SEXP _flowCore_getKeyword(SEXP frSEXP, SEXP keySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<MyMemCytoFrame> >::type fr(frSEXP);
    Rcpp::traits::input_parameter< string >::type key(keySEXP);
    rcpp_result_gen = Rcpp::wrap(getKeyword(fr, key));
    return rcpp_result_gen;
END_RCPP
}
// getKeywords
kw_type getKeywords(Rcpp::XPtr<MyMemCytoFrame> fr);
RcppExport SEXP _flowCore_getKeywords(SEXP frSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<MyMemCytoFrame> >::type fr(frSEXP);
    rcpp_result_gen = Rcpp::wrap(getKeywords(fr));
    return rcpp_result_gen;
END_RCPP
}
// getncol
int getncol(Rcpp::XPtr<MyMemCytoFrame> fr);
RcppExport SEXP _flowCore_getncol(SEXP frSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<MyMemCytoFrame> >::type fr(frSEXP);
    rcpp_result_gen = Rcpp::wrap(getncol(fr));
    return rcpp_result_gen;
END_RCPP
}
// getnrow
int getnrow(Rcpp::XPtr<MyMemCytoFrame> fr);
RcppExport SEXP _flowCore_getnrow(SEXP frSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<MyMemCytoFrame> >::type fr(frSEXP);
    rcpp_result_gen = Rcpp::wrap(getnrow(fr));
    return rcpp_result_gen;
END_RCPP
}
// getpdata
Rcpp::DataFrame getpdata(Rcpp::XPtr<MyMemCytoFrame> fr);
RcppExport SEXP _flowCore_getpdata(SEXP frSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<MyMemCytoFrame> >::type fr(frSEXP);
    rcpp_result_gen = Rcpp::wrap(getpdata(fr));
    return rcpp_result_gen;
END_RCPP
}
// isCytoLibOptimum
bool isCytoLibOptimum();
RcppExport SEXP _flowCore_isCytoLibOptimum() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(isCytoLibOptimum());
    return rcpp_result_gen;
END_RCPP
}
// fcsTextParse
myPairs fcsTextParse(std::string txt, bool emptyValue);
RcppExport SEXP _flowCore_fcsTextParse(SEXP txtSEXP, SEXP emptyValueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type txt(txtSEXP);
    Rcpp::traits::input_parameter< bool >::type emptyValue(emptyValueSEXP);
    rcpp_result_gen = Rcpp::wrap(fcsTextParse(txt, emptyValue));
    return rcpp_result_gen;
END_RCPP
}
// hyperlog_transform
std::vector<double> hyperlog_transform(std::vector<double> input, double T, double W, double M, double A, bool isInverse);
RcppExport SEXP _flowCore_hyperlog_transform(SEXP inputSEXP, SEXP TSEXP, SEXP WSEXP, SEXP MSEXP, SEXP ASEXP, SEXP isInverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type input(inputSEXP);
    Rcpp::traits::input_parameter< double >::type T(TSEXP);
    Rcpp::traits::input_parameter< double >::type W(WSEXP);
    Rcpp::traits::input_parameter< double >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< bool >::type isInverse(isInverseSEXP);
    rcpp_result_gen = Rcpp::wrap(hyperlog_transform(input, T, W, M, A, isInverse));
    return rcpp_result_gen;
END_RCPP
}
// inPolygon
std::vector<bool> inPolygon(NumericMatrix data, NumericMatrix vertices);
RcppExport SEXP _flowCore_inPolygon(SEXP dataSEXP, SEXP verticesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type vertices(verticesSEXP);
    rcpp_result_gen = Rcpp::wrap(inPolygon(data, vertices));
    return rcpp_result_gen;
END_RCPP
}
// inPolytope
std::vector<bool> inPolytope(NumericMatrix data, NumericMatrix A, NumericVector b);
RcppExport SEXP _flowCore_inPolytope(SEXP dataSEXP, SEXP ASEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(inPolytope(data, A, b));
    return rcpp_result_gen;
END_RCPP
}
// logicle_transform
std::vector<double> logicle_transform(std::vector<double> input, double T, double W, double M, double A, bool isInverse);
RcppExport SEXP _flowCore_logicle_transform(SEXP inputSEXP, SEXP TSEXP, SEXP WSEXP, SEXP MSEXP, SEXP ASEXP, SEXP isInverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type input(inputSEXP);
    Rcpp::traits::input_parameter< double >::type T(TSEXP);
    Rcpp::traits::input_parameter< double >::type W(WSEXP);
    Rcpp::traits::input_parameter< double >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< bool >::type isInverse(isInverseSEXP);
    rcpp_result_gen = Rcpp::wrap(logicle_transform(input, T, W, M, A, isInverse));
    return rcpp_result_gen;
END_RCPP
}
// sortBytes
BYTES sortBytes(BYTES bytes, std::vector<unsigned short> byte_order);
RcppExport SEXP _flowCore_sortBytes(SEXP bytesSEXP, SEXP byte_orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< BYTES >::type bytes(bytesSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned short> >::type byte_order(byte_orderSEXP);
    rcpp_result_gen = Rcpp::wrap(sortBytes(bytes, byte_order));
    return rcpp_result_gen;
END_RCPP
}
// uint2double
std::vector<double> uint2double(std::vector<unsigned> input, bool isBigEndian);
RcppExport SEXP _flowCore_uint2double(SEXP inputSEXP, SEXP isBigEndianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<unsigned> >::type input(inputSEXP);
    Rcpp::traits::input_parameter< bool >::type isBigEndian(isBigEndianSEXP);
    rcpp_result_gen = Rcpp::wrap(uint2double(input, isBigEndian));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_flowCore_biexponential_transform", (DL_FUNC) &_flowCore_biexponential_transform, 9},
    {"_flowCore_convertRawBytes", (DL_FUNC) &_flowCore_convertRawBytes, 5},
    {"_flowCore_parseFCS", (DL_FUNC) &_flowCore_parseFCS, 11},
    {"_flowCore_getData", (DL_FUNC) &_flowCore_getData, 1},
    {"_flowCore_getKeyword", (DL_FUNC) &_flowCore_getKeyword, 2},
    {"_flowCore_getKeywords", (DL_FUNC) &_flowCore_getKeywords, 1},
    {"_flowCore_getncol", (DL_FUNC) &_flowCore_getncol, 1},
    {"_flowCore_getnrow", (DL_FUNC) &_flowCore_getnrow, 1},
    {"_flowCore_getpdata", (DL_FUNC) &_flowCore_getpdata, 1},
    {"_flowCore_isCytoLibOptimum", (DL_FUNC) &_flowCore_isCytoLibOptimum, 0},
    {"_flowCore_fcsTextParse", (DL_FUNC) &_flowCore_fcsTextParse, 2},
    {"_flowCore_hyperlog_transform", (DL_FUNC) &_flowCore_hyperlog_transform, 6},
    {"_flowCore_inPolygon", (DL_FUNC) &_flowCore_inPolygon, 2},
    {"_flowCore_inPolytope", (DL_FUNC) &_flowCore_inPolytope, 3},
    {"_flowCore_logicle_transform", (DL_FUNC) &_flowCore_logicle_transform, 6},
    {"_flowCore_sortBytes", (DL_FUNC) &_flowCore_sortBytes, 2},
    {"_flowCore_uint2double", (DL_FUNC) &_flowCore_uint2double, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_flowCore(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
