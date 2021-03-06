#ifndef Rxz_dpd_hpp
#define Rxz_dpd_hpp 1

#include "TMBtools/MatrixIP.hpp"

#undef TMB_OBJECTIVE_PTR
#define TMB_OBJECTIVE_PTR obj
template <class Type>
Type Rxz_dpd(objective_function<Type>* obj) {
  DATA_VECTOR(R);
  DATA_VECTOR(z);
  PARAMETER_MATRIX(x);
  return MatrixIP(R, z, x);
}
#undef TMB_OBJECTIVE_PTR
#define TMB_OBJECTIVE_PTR this

#endif
