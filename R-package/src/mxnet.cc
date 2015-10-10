/*!
 *  Copyright (c) 2015 by Contributors
 * \file mxnet.cc
 * \brief The registry of all module functions and objects
 */
#include <Rcpp.h>
#include "./base.h"
#include "./ndarray.h"
#include "./symbol.h"
#include "./executor.h"
#include "./io.h"

RCPP_MODULE(mxnet) {
  using namespace mxnet::R;
  Context::InitRcppModule();
  NDArray::InitRcppModule();
  NDArrayFunction::InitRcppModule();
  Symbol::InitRcppModule();
  SymbolFunction::InitRcppModule();
  Executor::InitRcppModule();
  DataIter::InitRcppModule();
  DataIterCreateFunction::InitRcppModule();
}