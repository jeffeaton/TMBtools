// Generated by TMBtools: do not edit by hand

#define TMB_LIB_INIT R_init_{{pkg}}_TMBExports
#include <TMB.hpp>
{{{includes}}}

template<class Type>
Type objective_function<Type>::operator() () {
  DATA_STRING(model);
  {{{switches}}}
  return 0;
}