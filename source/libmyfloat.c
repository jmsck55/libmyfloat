// Copyright (c) 2023 James Cook
//
//  libmyfloat.c
//  libmyfloat
//
//  Created by James Cook on 3/6/23.
//
// Complex support for library:
// https://en.cppreference.com/w/c
// https://en.cppreference.com/w/c/numeric/math
// https://en.cppreference.com/w/c/numeric/complex


#include <math.h>
#include <complex.h>

#include "libmyfloat.h"

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

// Simple arithmetic:

MY_DLL_API float kaddf(float a, float b) { return a + b; }
MY_DLL_API float ksubtractf(float a, float b) { return a - b; }
MY_DLL_API float kmultiplyf(float a, float b) { return a * b; }
MY_DLL_API float kdividef(float a, float b) { return a / b; }
MY_DLL_API float knegatef(float a) { return - a; }

MY_DLL_API double kadd(double a, double b) { return a + b; }
MY_DLL_API double ksubtract(double a, double b) { return a - b; }
MY_DLL_API double kmultiply(double a, double b) { return a * b; }
MY_DLL_API double kdivide(double a, double b) { return a / b; }
MY_DLL_API double knegate(double a, double b) { return - a; }

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

// Complex/real type-generic macros

MY_DLL_API float kfabsf(float a) { return fabsf(a); }
MY_DLL_API float kexpf(float a) { return expf(a); }
MY_DLL_API float klogf(float a) { return logf(a); }
MY_DLL_API float kpowf(float a, float b) { return powf(a, b); }
MY_DLL_API float ksqrtf(float a) { return sqrtf(a); }
MY_DLL_API float ksinf(float a) { return sinf(a); }
MY_DLL_API float kcosf(float a) { return cosf(a); }
MY_DLL_API float ktanf(float a) { return tanf(a); }
MY_DLL_API float kasinf(float a) { return asinf(a); }
MY_DLL_API float kacosf(float a) { return acosf(a); }
MY_DLL_API float katanf(float a) { return atanf(a); }
MY_DLL_API float ksinhf(float a) { return sinhf(a); }
MY_DLL_API float kcoshf(float a) { return coshf(a); }
MY_DLL_API float ktanhf(float a) { return tanhf(a); }
MY_DLL_API float kasinhf(float a) { return asinhf(a); }
MY_DLL_API float kacoshf(float a) { return acoshf(a); }
MY_DLL_API float katanhf(float a) { return atanhf(a); }

MY_DLL_API double kfabs(double a) { return fabs(a); }
MY_DLL_API double kexp(double a) { return exp(a); }
MY_DLL_API double klog(double a) { return log(a); }
MY_DLL_API double kpow(double a, double b) { return pow(a, b); }
MY_DLL_API double ksqrt(double a) { return sqrt(a); }
MY_DLL_API double ksin(double a) { return sin(a); }
MY_DLL_API double kcos(double a) { return cos(a); }
MY_DLL_API double ktan(double a) { return tan(a); }
MY_DLL_API double kasin(double a) { return asin(a); }
MY_DLL_API double kacos(double a) { return acos(a); }
MY_DLL_API double katan(double a) { return atan(a); }
MY_DLL_API double ksinh(double a) { return sinh(a); }
MY_DLL_API double kcosh(double a) { return cosh(a); }
MY_DLL_API double ktanh(double a) { return tanh(a); }
MY_DLL_API double kasinh(double a) { return asinh(a); }
MY_DLL_API double kacosh(double a) { return acosh(a); }
MY_DLL_API double katanh(double a) { return atanh(a); }

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

// REAL Only functions:

MY_DLL_API float katan2f(float a, float b) { return atan2f(a, b); }
MY_DLL_API float kcbrtf(float a) { return cbrtf(a); }
MY_DLL_API float kceilf(float a) { return ceilf(a); }
MY_DLL_API float kcopysignf(float a, float b) { return copysignf(a, b); }
MY_DLL_API float kerff(float a) { return erff(a); }
MY_DLL_API float kerfcf(float a) { return erfcf(a); }
MY_DLL_API float kexp2f(float a) { return exp2f(a); }
MY_DLL_API float kexpm1f(float a) { return expm1f(a); }
MY_DLL_API float kfdimf(float a, float b) { return fdimf(a, b); }
MY_DLL_API float kfloorf(float a) { return floorf(a); }
MY_DLL_API float kfmaf(float a, float b, float c) { return fmaf(a, b, c); }
MY_DLL_API float kfmaxf(float a, float b) { return fmaxf(a, b); }
MY_DLL_API float kfminf(float a, float b) { return fminf(a, b); }
MY_DLL_API float kfmodf(float a, float b) { return fmodf(a, b); }
MY_DLL_API float kfrexpf(float a, int *idst) { return frexpf(a, idst); }
MY_DLL_API float khypotf(float a, float b) { return hypotf(a, b); }
MY_DLL_API int kilogbf(float a) { return ilogbf(a); }
MY_DLL_API float kldexpf(float a, int i) { return ldexpf(a, i); }
MY_DLL_API float klgammaf(float a) { return lgammaf(a); }
MY_DLL_API long long kllrintf(float a) { return llrintf(a); }
MY_DLL_API long long kllroundf(float a) { return llroundf(a); }
MY_DLL_API float klog10f(float a) { return log10f(a); }
MY_DLL_API float klog1pf(float a) { return log1pf(a); }
MY_DLL_API float klog2f(float a) { return log2f(a); }
MY_DLL_API float klogbf(float a) { return logbf(a); }
MY_DLL_API long klrintf(float a) { return lrintf(a); }
MY_DLL_API long klroundf(float a) { return lroundf(a); }
MY_DLL_API float knearbyintf(float a) { return nearbyintf(a); }
MY_DLL_API float knextafterf(float a, float b) { return nextafterf(a, b); }
MY_DLL_API float knexttowardf(float a, long double ld) { return nexttowardf(a, ld); }
MY_DLL_API float kremainderf(float a, float b) { return remainderf(a, b); }
MY_DLL_API float kremquof(float a, float b, int *idst) { return remquof(a, b, idst); }
MY_DLL_API float krintf(float a) { return rintf(a); }
MY_DLL_API float kroundf(float a) { return roundf(a); }
MY_DLL_API float kscalblnf(float a, long il) { return scalblnf(a, il); }
MY_DLL_API float kscalbnf(float a, int i) { return scalbnf(a, i); }
MY_DLL_API float ktgammaf(float a) { return tgammaf(a); }
MY_DLL_API float ktruncf(float a) { return truncf(a); }

MY_DLL_API double katan2(double a, double b) { return atan2(a, b); }
MY_DLL_API double kcbrt(double a) { return cbrt(a); }
MY_DLL_API double kceil(double a) { return ceil(a); }
MY_DLL_API double kcopysign(double a, double b) { return copysign(a, b); }
MY_DLL_API double kerf(double a) { return erf(a); }
MY_DLL_API double kerfc(double a) { return erfc(a); }
MY_DLL_API double kexp2(double a) { return exp2(a); }
MY_DLL_API double kexpm1(double a) { return expm1(a); }
MY_DLL_API double kfdim(double a, double b) { return fdim(a, b); }
MY_DLL_API double kfloor(double a) { return floor(a); }
MY_DLL_API double kfma(double a, double b, double c) { return fma(a, b, c); }
MY_DLL_API double kfmax(double a, double b) { return fmax(a, b); }
MY_DLL_API double kfmin(double a, double b) { return fmin(a, b); }
MY_DLL_API double kfmod(double a, double b) { return fmod(a, b); }
MY_DLL_API double kfrexp(double a, int *idst) { return frexp(a, idst); }
MY_DLL_API double khypot(double a, double b) { return hypot(a, b); }
MY_DLL_API int kilogb(double a) { return ilogb(a); }
MY_DLL_API double kldexp(double a, int i) { return ldexp(a, i); }
MY_DLL_API double klgamma(double a) { return lgamma(a); }
MY_DLL_API long long kllrint(double a) { return llrint(a); }
MY_DLL_API long long kllround(double a) { return llround(a); }
MY_DLL_API double klog10(double a) { return log10(a); }
MY_DLL_API double klog1p(double a) { return log1p(a); }
MY_DLL_API double klog2(double a) { return log2(a); }
MY_DLL_API double klogb(double a) { return logb(a); }
MY_DLL_API long klrint(double a) { return lrint(a); }
MY_DLL_API long klround(double a) { return lround(a); }
MY_DLL_API double knearbyint(double a) { return nearbyint(a); }
MY_DLL_API double knextafter(double a, double b) { return nextafter(a, b); }
MY_DLL_API double knexttoward(double a, long double ld) { return nexttoward(a, ld); }
MY_DLL_API double kremainder(double a, double b) { return remainder(a, b); }
MY_DLL_API double kremquo(double a, double b, int *idst) { return remquo(a, b, idst); }
MY_DLL_API double krint(double a) { return rint(a); }
MY_DLL_API double kround(double a) { return round(a); }
MY_DLL_API double kscalbln(double a, long il) { return scalbln(a, il); }
MY_DLL_API double kscalbn(double a, int i) { return scalbn(a, i); }
MY_DLL_API double ktgamma(double a) { return tgamma(a); }
MY_DLL_API double ktrunc(double a) { return trunc(a); }

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

/*
Classification macro / functions
*/

MY_DLL_API int fpclassifyj(float a)
{
    return (int)fpclassify(a);
}
MY_DLL_API int isfinitej(float a)
{
    return (int)isfinite(a);
}
MY_DLL_API int isinfj(float a)
{
    return (int)isinf(a);
}
MY_DLL_API int isnanj(float a)
{
    return (int)isnan(a);
}
MY_DLL_API int isnormalj(float a)
{
    return (int)isnormal(a);
}
MY_DLL_API int signbitj(float a)
{
    return (int)signbit(a);
}

/*
Comparison macro / functions
*/

MY_DLL_API int isgreaterj(float a, float b)
{
    return (int)isgreater(a, b);
}
MY_DLL_API int isgreaterequalj(float a, float b)
{
    return (int)isgreaterequal(a, b);
}
MY_DLL_API int islessj(float a, float b)
{
    return (int)isless(a, b);
}
MY_DLL_API int islessequalj(float a, float b)
{
    return (int)islessequal(a, b);
}
MY_DLL_API int islessgreaterj(float a, float b)
{
    return (int)islessgreater(a, b);
}
MY_DLL_API int isunorderedj(float a, float b)
{
    return (int)isunordered(a, b);
}

/*
Macro constants

math_errhandling
INFINITY
NAN
HUGE_VAL
HUGE_VALF
HUGE_VALL


macro	type	description
MATH_ERRNO 
MATH_ERREXCEPT	int	Bitmask value with the possible values math_errhandling can take.
FP_FAST_FMA 
FP_FAST_FMAF 
FP_FAST_FMAL	int	Each, if defined, identifies for which type fma is at least as efficient as x*y+z.
FP_INFINITE 
FP_NAN 
FP_NORMAL 
FP_SUBNORMAL 
FP_ZERO	int	The possible values returned by fpclassify.
FP_ILOGB0 
FP_ILOGBNAN	int	Special values the ilogb function may return.

*/
