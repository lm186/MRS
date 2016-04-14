// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fitMRScpp
Rcpp::List fitMRScpp(arma::mat X, arma::vec G, int n_groups, arma::vec init_state, arma::mat Omega, int K, double alpha, double beta, double gamma, double eta, bool return_global_null, bool return_tree, int min_n_node);
RcppExport SEXP MRS_fitMRScpp(SEXP XSEXP, SEXP GSEXP, SEXP n_groupsSEXP, SEXP init_stateSEXP, SEXP OmegaSEXP, SEXP KSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP gammaSEXP, SEXP etaSEXP, SEXP return_global_nullSEXP, SEXP return_treeSEXP, SEXP min_n_nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type n_groups(n_groupsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init_state(init_stateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< bool >::type return_global_null(return_global_nullSEXP);
    Rcpp::traits::input_parameter< bool >::type return_tree(return_treeSEXP);
    Rcpp::traits::input_parameter< int >::type min_n_node(min_n_nodeSEXP);
    __result = Rcpp::wrap(fitMRScpp(X, G, n_groups, init_state, Omega, K, alpha, beta, gamma, eta, return_global_null, return_tree, min_n_node));
    return __result;
END_RCPP
}
// fitMRSNESTEDcpp
Rcpp::List fitMRSNESTEDcpp(arma::mat X, arma::vec G, arma::vec H, int n_groups, arma::Col<int> n_subgroups, arma::vec init_state, arma::mat Omega, arma::vec nu_vec, int K, double alpha, double beta, double gamma, double eta, bool return_global_null, bool return_tree);
RcppExport SEXP MRS_fitMRSNESTEDcpp(SEXP XSEXP, SEXP GSEXP, SEXP HSEXP, SEXP n_groupsSEXP, SEXP n_subgroupsSEXP, SEXP init_stateSEXP, SEXP OmegaSEXP, SEXP nu_vecSEXP, SEXP KSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP gammaSEXP, SEXP etaSEXP, SEXP return_global_nullSEXP, SEXP return_treeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type G(GSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type H(HSEXP);
    Rcpp::traits::input_parameter< int >::type n_groups(n_groupsSEXP);
    Rcpp::traits::input_parameter< arma::Col<int> >::type n_subgroups(n_subgroupsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init_state(init_stateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type nu_vec(nu_vecSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< bool >::type return_global_null(return_global_nullSEXP);
    Rcpp::traits::input_parameter< bool >::type return_tree(return_treeSEXP);
    __result = Rcpp::wrap(fitMRSNESTEDcpp(X, G, H, n_groups, n_subgroups, init_state, Omega, nu_vec, K, alpha, beta, gamma, eta, return_global_null, return_tree));
    return __result;
END_RCPP
}
