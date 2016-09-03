#ifndef RcppMLPACK__RcppMLPACK__h
#define RcppMLPACK__RcppMLPACK__h

#if _WIN64
#ifndef ARMA_64BIT_WORD
#define ARMA_64BIT_WORD
#endif
#endif

#if defined(__MINGW32__)
#define ARMA_DONT_USE_CXX11
#endif

// Rcpp has its own stream object which cooperates more nicely with R's i/o
// And as of Armadillo 2.4.3, we can use this stream object as well 
#if !defined(ARMA_DEFAULT_OSTREAM)
#define ARMA_DEFAULT_OSTREAM Rcpp::Rcout
#endif

#include <Rcpp.h>

#include <mlpack/core.hpp>

// instead of including RcppArmadillo.h -- which re-includes parts
// of Armadillo already brought in by mlpack, we just include pieces
// needed for sugar wrapping etc 

#include <RcppArmadilloConfig.h>
#include <RcppArmadilloWrap.h>
#include <RcppArmadilloAs.h>
#include <RcppArmadilloSugar.h>



#endif
