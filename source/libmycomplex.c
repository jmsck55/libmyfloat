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

MY_DLL_API long long ComplexVersion()
{
    return COMPLEX_VERSION;
}

// Macros for Complex data types:

#ifndef CMPLX
#define CMPLX(x, y) ((double complex)((double)(x) + I * (double)(y)))
#endif
#ifndef CMPLXF
#define CMPLXF(x, y) ((float complex)((float)(x) + I * (float)(y)))
#endif

// Example:

// float kcaddf(float *dst, float areal, float aimag, float breal, float bimag)
// {
//      float complex a, b;
//      a = CMPLXF(areal, aimag);
//      b = CMPLXF(breal, bimag);
//      a += b; // operation
//      if (dst != NULL)
//          (*dst) = cimagf(a);
//      return crealf(a);
// }
// double kcadd(double *dst, double areal, double aimag, double breal, double bimag)
// {
//      double complex a, b;
//      a = CMPLX(areal, aimag);
//      b = CMPLX(breal, bimag);
//      a += b; // operation
//      if (dst != NULL)
//          (*dst) = cimag(a);
//      return creal(a);
// }

// Macros:

#define KC_MACRO_2F(OP) \
    float complex a, b, c; \
    a = CMPLXF(areal, aimag); \
    b = CMPLXF(breal, bimag); \
    c = OP(a, b); \
    if (dst != NULL) \
        (*dst) = cimagf(c); \
    return crealf(c)

#define KC_MACRO_2(OP) \
    double complex a, b, c; \
    a = CMPLX(areal, aimag); \
    b = CMPLX(breal, bimag); \
    c = OP(a, b); \
    if (dst != NULL) \
        (*dst) = cimag(c); \
    return creal(c)

#define KC_MACRO_1F(OP) \
    float complex a, c; \
    a = CMPLXF(areal, aimag); \
    c = OP(a); \
    if (dst != NULL) \
        (*dst) = cimagf(c); \
    return crealf(c)

#define KC_MACRO_1(OP) \
    double complex a, c; \
    a = CMPLX(areal, aimag); \
    c = OP(a); \
    if (dst != NULL) \
        (*dst) = cimag(c); \
    return creal(c)

// Complex Only functions:

MY_DLL_API float acargf(float *dst, float areal, float aimag) { KC_MACRO_1F(cargf); }
MY_DLL_API float aconjf(float *dst, float areal, float aimag) { KC_MACRO_1F(conjf); }
MY_DLL_API float acrealf(float *dst, float areal, float aimag) { KC_MACRO_1F(crealf); }
MY_DLL_API float acimagf(float *dst, float areal, float aimag) { KC_MACRO_1F(cimagf); }
MY_DLL_API float acprojf(float *dst, float areal, float aimag) { KC_MACRO_1F(cprojf); }

MY_DLL_API double acarg(double *dst, double areal, double aimag) { KC_MACRO_1(carg); }
MY_DLL_API double aconj(double *dst, double areal, double aimag) { KC_MACRO_1(conj); }
MY_DLL_API double acreal(double *dst, double areal, double aimag) { KC_MACRO_1(creal); }
MY_DLL_API double acimag(double *dst, double areal, double aimag) { KC_MACRO_1(cimag); }
MY_DLL_API double acproj(double *dst, double areal, double aimag) { KC_MACRO_1(cproj); }

// Simple arithmetic:

#define ADD(A, B) A + B
#define SUBTRACT(A, B) A - B
#define MULTIPLY(A, B) A * B
#define DIVIDE(A, B) A / B
#define NEGATE(A) - A

MY_DLL_API float acaddf(float *dst, float areal, float aimag, float breal, float bimag) { KC_MACRO_2F(ADD); }
MY_DLL_API float acsubtractf(float *dst, float areal, float aimag, float breal, float bimag) { KC_MACRO_2F(SUBTRACT); }
MY_DLL_API float acmultiplyf(float *dst, float areal, float aimag, float breal, float bimag) { KC_MACRO_2F(MULTIPLY); }
MY_DLL_API float acdividef(float *dst, float areal, float aimag, float breal, float bimag) { KC_MACRO_2F(DIVIDE); }
MY_DLL_API float acnegatef(float *dst, float areal, float aimag) { KC_MACRO_1F(NEGATE); }

MY_DLL_API double acadd(double *dst, double areal, double aimag, double breal, double bimag) { KC_MACRO_2(ADD); }
MY_DLL_API double acsubtract(double *dst, double areal, double aimag, double breal, double bimag) { KC_MACRO_2(SUBTRACT); }
MY_DLL_API double acmultiply(double *dst, double areal, double aimag, double breal, double bimag) { KC_MACRO_2(MULTIPLY); }
MY_DLL_API double acdivide(double *dst, double areal, double aimag, double breal, double bimag) { KC_MACRO_2(DIVIDE); }
MY_DLL_API double acnegate(double *dst, double areal, double aimag) { KC_MACRO_1(NEGATE); }

// Complex functions:

MY_DLL_API float acabsf(float *dst, float areal, float aimag) { KC_MACRO_1F(cabsf); }
MY_DLL_API float acexpf(float *dst, float areal, float aimag) { KC_MACRO_1F(cexpf); }
MY_DLL_API float aclogf(float *dst, float areal, float aimag) { KC_MACRO_1F(clogf); }
MY_DLL_API float acpowf(float *dst, float areal, float aimag, float breal, float bimag) { KC_MACRO_2F(cpowf); }
MY_DLL_API float acsqrtf(float *dst, float areal, float aimag) { KC_MACRO_1F(csqrtf); }
MY_DLL_API float acsinf(float *dst, float areal, float aimag) { KC_MACRO_1F(csinf); }
MY_DLL_API float accosf(float *dst, float areal, float aimag) { KC_MACRO_1F(ccosf); }
MY_DLL_API float actanf(float *dst, float areal, float aimag) { KC_MACRO_1F(ctanf); }
MY_DLL_API float acasinf(float *dst, float areal, float aimag) { KC_MACRO_1F(casinf); }
MY_DLL_API float acacosf(float *dst, float areal, float aimag) { KC_MACRO_1F(cacosf); }
MY_DLL_API float acatanf(float *dst, float areal, float aimag) { KC_MACRO_1F(catanf); }
MY_DLL_API float acsinhf(float *dst, float areal, float aimag) { KC_MACRO_1F(csinhf); }
MY_DLL_API float accoshf(float *dst, float areal, float aimag) { KC_MACRO_1F(ccoshf); }
MY_DLL_API float actanhf(float *dst, float areal, float aimag) { KC_MACRO_1F(ctanhf); }
MY_DLL_API float acasinhf(float *dst, float areal, float aimag) { KC_MACRO_1F(casinhf); }
MY_DLL_API float acacoshf(float *dst, float areal, float aimag) { KC_MACRO_1F(cacoshf); }
MY_DLL_API float acatanhf(float *dst, float areal, float aimag) { KC_MACRO_1F(catanhf); }

MY_DLL_API double acabs(double *dst, double areal, double aimag) { KC_MACRO_1(cabs); }
MY_DLL_API double acexp(double *dst, double areal, double aimag) { KC_MACRO_1(cexp); }
MY_DLL_API double aclog(double *dst, double areal, double aimag) { KC_MACRO_1(clog); }
MY_DLL_API double acpow(double *dst, double areal, double aimag, double breal, double bimag) { KC_MACRO_2(cpow); }
MY_DLL_API double acsqrt(double *dst, double areal, double aimag) { KC_MACRO_1(csqrt); }
MY_DLL_API double acsin(double *dst, double areal, double aimag) { KC_MACRO_1(csin); }
MY_DLL_API double accos(double *dst, double areal, double aimag) { KC_MACRO_1(ccos); }
MY_DLL_API double actan(double *dst, double areal, double aimag) { KC_MACRO_1(ctan); }
MY_DLL_API double acasin(double *dst, double areal, double aimag) { KC_MACRO_1(casin); }
MY_DLL_API double acacos(double *dst, double areal, double aimag) { KC_MACRO_1(cacos); }
MY_DLL_API double acatan(double *dst, double areal, double aimag) { KC_MACRO_1(catan); }
MY_DLL_API double acsinh(double *dst, double areal, double aimag) { KC_MACRO_1(csinh); }
MY_DLL_API double accosh(double *dst, double areal, double aimag) { KC_MACRO_1(ccosh); }
MY_DLL_API double actanh(double *dst, double areal, double aimag) { KC_MACRO_1(ctanh); }
MY_DLL_API double acasinh(double *dst, double areal, double aimag) { KC_MACRO_1(casinh); }
MY_DLL_API double acacosh(double *dst, double areal, double aimag) { KC_MACRO_1(cacosh); }
MY_DLL_API double acatanh(double *dst, double areal, double aimag) { KC_MACRO_1(catanh); }

// End of libmycomple.c file.
