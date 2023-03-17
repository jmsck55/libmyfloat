// Copyright (c) 2023 James Cook
//
//  libmyfloat.c
//  libmyfloat
//
//  Created by James Cook on 3/6/23.
//
// Complex support for library:
// https://en.cppreference.com/w/c
// https://en.cppreference.com/w/c/numeric/complex


#include <complex.h>

#include "libmycomplex.h"

// Macros for Complex data types:

#ifndef CMPLX
#define CMPLX(x, y) ((double complex)((double)(x) + I * (double)(y)))
#endif
#ifndef CMPLXF
#define CMPLXF(x, y) ((float complex)((float)(x) + I * (float)(y)))
#endif

// double kcadd(double *dst, double areal, double aimag, double breal, double bimag)
// {
//      double complex a, b;
//      a = CMPLX(areal, aimag);
//      b = CMPLX(breal, bimag);
//      a += b; // operation
//      (*dst) = creal(a);
//      return cimag(a);
// }
// float kcaddf(float *dst, float areal, float aimag, float breal, float bimag)
// {
//      float complex a, b;
//      a = CMPLXF(areal, aimag);
//      b = CMPLXF(breal, bimag);
//      a += b; // operation
//      (*dst) = crealf(a);
//      return cimagf(a);
// }

#define KC_MACRO_2F(OP) \
    float complex a, b, c; \
    a = CMPLXF(areal, aimag); \
    b = CMPLXF(breal, bimag); \
    c = OP(a, b); \
    (*dst) = crealf(c); \
    return cimagf(c)

#define KC_MACRO_2(OP) \
    double complex a, b, c; \
    a = CMPLX(areal, aimag); \
    b = CMPLX(breal, bimag); \
    c = OP(a, b); \
    (*dst) = creal(c); \
    return cimag(c)

#define KC_MACRO_1F(OP) \
    float complex a, c; \
    a = CMPLXF(areal, aimag); \
    c = OP(a); \
    (*dst) = crealf(c); \
    return cimagf(c)

#define KC_MACRO_1(OP) \
    double complex a, c; \
    a = CMPLX(areal, aimag); \
    c = OP(a); \
    (*dst) = creal(c); \
    return cimag(c)

// Complex Only functions:

MY_DLL_API float kcargf(float *dst, float areal, float aimag) { KC_MACRO_1F(cargf); }
MY_DLL_API float kconjf(float *dst, float areal, float aimag) { KC_MACRO_1F(conjf); }
MY_DLL_API float kcrealf(float *dst, float areal, float aimag) { KC_MACRO_1F(crealf); }
MY_DLL_API float kcimagf(float *dst, float areal, float aimag) { KC_MACRO_1F(cimagf); }
MY_DLL_API float kcprojf(float *dst, float areal, float aimag) { KC_MACRO_1F(cprojf); }

MY_DLL_API double kcarg(double *dst, double areal, double aimag) { KC_MACRO_1(carg); }
MY_DLL_API double kconj(double *dst, double areal, double aimag) { KC_MACRO_1(conj); }
MY_DLL_API double kcreal(double *dst, double areal, double aimag) { KC_MACRO_1(creal); }
MY_DLL_API double kcimag(double *dst, double areal, double aimag) { KC_MACRO_1(cimag); }
MY_DLL_API double kcproj(double *dst, double areal, double aimag) { KC_MACRO_1(cproj); }

// Simple arithmetic:

#define ADD(A, B) A + B
#define SUBTRACT(A, B) A - B
#define MULTIPLY(A, B) A * B
#define DIVIDE(A, B) A / B
#define NEGATE(A) - A

MY_DLL_API float kcaddf(float *dst, float areal, float aimag, float breal, float bimag) { KC_MACRO_2F(ADD); }
MY_DLL_API float kcsubtractf(float *dst, float areal, float aimag, float breal, float bimag) { KC_MACRO_2F(SUBTRACT); }
MY_DLL_API float kcmultiplyf(float *dst, float areal, float aimag, float breal, float bimag) { KC_MACRO_2F(MULTIPLY); }
MY_DLL_API float kcdividef(float *dst, float areal, float aimag, float breal, float bimag) { KC_MACRO_2F(DIVIDE); }
MY_DLL_API float kcnegatef(float *dst, float areal, float aimag, float breal, float bimag) { KC_MACRO_1F(NEGATE); }

MY_DLL_API double kcadd(double *dst, double areal, double aimag, double breal, double bimag) { KC_MACRO_2(ADD); }
MY_DLL_API double kcsubtract(double *dst, double areal, double aimag, double breal, double bimag) { KC_MACRO_2(SUBTRACT); }
MY_DLL_API double kcmultiply(double *dst, double areal, double aimag, double breal, double bimag) { KC_MACRO_2(MULTIPLY); }
MY_DLL_API double kcdivide(double *dst, double areal, double aimag, double breal, double bimag) { KC_MACRO_2(DIVIDE); }
MY_DLL_API double kcnegate(double *dst, double areal, double aimag, double breal, double bimag) { KC_MACRO_1(NEGATE); }

// Complex functions:

MY_DLL_API float kcabsf(float *dst, float areal, float aimag) { KC_MACRO_1F(cabsf); }
MY_DLL_API float kcexpf(float *dst, float areal, float aimag) { KC_MACRO_1F(cexpf); }
MY_DLL_API float kclogf(float *dst, float areal, float aimag) { KC_MACRO_1F(clogf); }
MY_DLL_API float kcpowf(float *dst, float areal, float aimag, float breal, float bimag) { KC_MACRO_2F(cpowf); }
MY_DLL_API float kcsqrtf(float *dst, float areal, float aimag) { KC_MACRO_1F(csqrtf); }
MY_DLL_API float kcsinf(float *dst, float areal, float aimag) { KC_MACRO_1F(csinf); }
MY_DLL_API float kccosf(float *dst, float areal, float aimag) { KC_MACRO_1F(ccosf); }
MY_DLL_API float kctanf(float *dst, float areal, float aimag) { KC_MACRO_1F(ctanf); }
MY_DLL_API float kcasinf(float *dst, float areal, float aimag) { KC_MACRO_1F(casinf); }
MY_DLL_API float kcacosf(float *dst, float areal, float aimag) { KC_MACRO_1F(cacosf); }
MY_DLL_API float kcatanf(float *dst, float areal, float aimag) { KC_MACRO_1F(catanf); }
MY_DLL_API float kcsinhf(float *dst, float areal, float aimag) { KC_MACRO_1F(csinhf); }
MY_DLL_API float kccoshf(float *dst, float areal, float aimag) { KC_MACRO_1F(ccoshf); }
MY_DLL_API float kctanhf(float *dst, float areal, float aimag) { KC_MACRO_1F(ctanhf); }
MY_DLL_API float kcasinhf(float *dst, float areal, float aimag) { KC_MACRO_1F(casinhf); }
MY_DLL_API float kcacoshf(float *dst, float areal, float aimag) { KC_MACRO_1F(cacoshf); }
MY_DLL_API float kcatanhf(float *dst, float areal, float aimag) { KC_MACRO_1F(catanhf); }

MY_DLL_API double kcabs(double *dst, double areal, double aimag) { KC_MACRO_1(cabs); }
MY_DLL_API double kcexp(double *dst, double areal, double aimag) { KC_MACRO_1(cexp); }
MY_DLL_API double kclog(double *dst, double areal, double aimag) { KC_MACRO_1(clog); }
MY_DLL_API double kcpow(double *dst, double areal, double aimag, double breal, double bimag) { KC_MACRO_2(cpow); }
MY_DLL_API double kcsqrt(double *dst, double areal, double aimag) { KC_MACRO_1(csqrt); }
MY_DLL_API double kcsin(double *dst, double areal, double aimag) { KC_MACRO_1(csin); }
MY_DLL_API double kccos(double *dst, double areal, double aimag) { KC_MACRO_1(ccos); }
MY_DLL_API double kctan(double *dst, double areal, double aimag) { KC_MACRO_1(ctan); }
MY_DLL_API double kcasin(double *dst, double areal, double aimag) { KC_MACRO_1(casin); }
MY_DLL_API double kcacos(double *dst, double areal, double aimag) { KC_MACRO_1(cacos); }
MY_DLL_API double kcatan(double *dst, double areal, double aimag) { KC_MACRO_1(catan); }
MY_DLL_API double kcsinh(double *dst, double areal, double aimag) { KC_MACRO_1(csinh); }
MY_DLL_API double kccosh(double *dst, double areal, double aimag) { KC_MACRO_1(ccosh); }
MY_DLL_API double kctanh(double *dst, double areal, double aimag) { KC_MACRO_1(ctanh); }
MY_DLL_API double kcasinh(double *dst, double areal, double aimag) { KC_MACRO_1(casinh); }
MY_DLL_API double kcacosh(double *dst, double areal, double aimag) { KC_MACRO_1(cacosh); }
MY_DLL_API double kcatanh(double *dst, double areal, double aimag) { KC_MACRO_1(catanh); }

// End of libmycomple.c file.
