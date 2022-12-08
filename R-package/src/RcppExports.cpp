// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// _cov_shrink_spd
Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic> _cov_shrink_spd(Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>& x);
RcppExport SEXP _GraphSPME__cov_shrink_spd(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(_cov_shrink_spd(x));
    return rcpp_result_gen;
END_RCPP
}
// _sparse_matrix_inverse
Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic> _sparse_matrix_inverse(Eigen::SparseMatrix<double>& A);
RcppExport SEXP _GraphSPME__sparse_matrix_inverse(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(_sparse_matrix_inverse(A));
    return rcpp_result_gen;
END_RCPP
}
// _prec_sparse
Eigen::SparseMatrix<double> _prec_sparse(Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>& x, Eigen::SparseMatrix<double>& Neighbours, int markov_order, bool cov_shrinkage, bool symmetrization);
RcppExport SEXP _GraphSPME__prec_sparse(SEXP xSEXP, SEXP NeighboursSEXP, SEXP markov_orderSEXP, SEXP cov_shrinkageSEXP, SEXP symmetrizationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type Neighbours(NeighboursSEXP);
    Rcpp::traits::input_parameter< int >::type markov_order(markov_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type cov_shrinkage(cov_shrinkageSEXP);
    Rcpp::traits::input_parameter< bool >::type symmetrization(symmetrizationSEXP);
    rcpp_result_gen = Rcpp::wrap(_prec_sparse(x, Neighbours, markov_order, cov_shrinkage, symmetrization));
    return rcpp_result_gen;
END_RCPP
}
// _cov_ml
Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic> _cov_ml(Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>& x);
RcppExport SEXP _GraphSPME__cov_ml(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(_cov_ml(x));
    return rcpp_result_gen;
END_RCPP
}
// _create_bi
Eigen::SparseMatrix<double> _create_bi(Eigen::SparseMatrix<double>& Z, int j);
RcppExport SEXP _GraphSPME__create_bi(SEXP ZSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(_create_bi(Z, j));
    return rcpp_result_gen;
END_RCPP
}
// _get_precision_nonzero
Eigen::SparseMatrix<double> _get_precision_nonzero(Eigen::SparseMatrix<double>& Graph, int markov_order);
RcppExport SEXP _GraphSPME__get_precision_nonzero(SEXP GraphSEXP, SEXP markov_orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type Graph(GraphSEXP);
    Rcpp::traits::input_parameter< int >::type markov_order(markov_orderSEXP);
    rcpp_result_gen = Rcpp::wrap(_get_precision_nonzero(Graph, markov_order));
    return rcpp_result_gen;
END_RCPP
}
// _prec_nll
double _prec_nll(Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>& X, Eigen::SparseMatrix<double>& Prec);
RcppExport SEXP _GraphSPME__prec_nll(SEXP XSEXP, SEXP PrecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type Prec(PrecSEXP);
    rcpp_result_gen = Rcpp::wrap(_prec_nll(X, Prec));
    return rcpp_result_gen;
END_RCPP
}
// _prec_aic
double _prec_aic(Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>& X, Eigen::SparseMatrix<double>& Prec);
RcppExport SEXP _GraphSPME__prec_aic(SEXP XSEXP, SEXP PrecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type Prec(PrecSEXP);
    rcpp_result_gen = Rcpp::wrap(_prec_aic(X, Prec));
    return rcpp_result_gen;
END_RCPP
}
// _ensure_eigenvalue_lower_bound
Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic> _ensure_eigenvalue_lower_bound(Eigen::SparseMatrix<double>& A, double eps, bool is_symmetric);
RcppExport SEXP _GraphSPME__ensure_eigenvalue_lower_bound(SEXP ASEXP, SEXP epsSEXP, SEXP is_symmetricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< bool >::type is_symmetric(is_symmetricSEXP);
    rcpp_result_gen = Rcpp::wrap(_ensure_eigenvalue_lower_bound(A, eps, is_symmetric));
    return rcpp_result_gen;
END_RCPP
}
// _ldl_fbmod
Eigen::SparseMatrix<double> _ldl_fbmod(Eigen::SparseMatrix<double>& A, double eps, bool is_symmetric);
RcppExport SEXP _GraphSPME__ldl_fbmod(SEXP ASEXP, SEXP epsSEXP, SEXP is_symmetricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< bool >::type is_symmetric(is_symmetricSEXP);
    rcpp_result_gen = Rcpp::wrap(_ldl_fbmod(A, eps, is_symmetric));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GraphSPME__cov_shrink_spd", (DL_FUNC) &_GraphSPME__cov_shrink_spd, 1},
    {"_GraphSPME__sparse_matrix_inverse", (DL_FUNC) &_GraphSPME__sparse_matrix_inverse, 1},
    {"_GraphSPME__prec_sparse", (DL_FUNC) &_GraphSPME__prec_sparse, 5},
    {"_GraphSPME__cov_ml", (DL_FUNC) &_GraphSPME__cov_ml, 1},
    {"_GraphSPME__create_bi", (DL_FUNC) &_GraphSPME__create_bi, 2},
    {"_GraphSPME__get_precision_nonzero", (DL_FUNC) &_GraphSPME__get_precision_nonzero, 2},
    {"_GraphSPME__prec_nll", (DL_FUNC) &_GraphSPME__prec_nll, 2},
    {"_GraphSPME__prec_aic", (DL_FUNC) &_GraphSPME__prec_aic, 2},
    {"_GraphSPME__ensure_eigenvalue_lower_bound", (DL_FUNC) &_GraphSPME__ensure_eigenvalue_lower_bound, 3},
    {"_GraphSPME__ldl_fbmod", (DL_FUNC) &_GraphSPME__ldl_fbmod, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_GraphSPME(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
