// Copyright (c) 2023 James Cook
//
//  libmyfloat.c
//  libmyfloat
//
//  Created by James Cook on 3/6/23.
//
// "C/CPP" Reference:
// https://en.cppreference.com/w/c
// https://en.cppreference.com/w/c/numeric/math

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "libmyfloat.h"

MY_DLL_API int SizeOfLong()
{
    return (int)sizeof(long); // __SIZEOF_LONG__
}
MY_DLL_API int SizeOfLongDouble()
{
    return (int)sizeof(long double); // __SIZEOF_LONG_DOUBLE__
}
MY_DLL_API long long FloatVersion()
{
    return FLOAT_VERSION;
}

// Simple arithmetic:

MY_DLL_API float aaddf(float a, float b) { return a + b; }
MY_DLL_API float asubtractf(float a, float b) { return a - b; }
MY_DLL_API float amultiplyf(float a, float b) { return a * b; }
MY_DLL_API float adividef(float a, float b) { return a / b; }
MY_DLL_API float anegatef(float a) { return - a; }

MY_DLL_API double aadd(double a, double b) { return a + b; }
MY_DLL_API double asubtract(double a, double b) { return a - b; }
MY_DLL_API double amultiply(double a, double b) { return a * b; }
MY_DLL_API double adivide(double a, double b) { return a / b; }
MY_DLL_API double anegate(double a, double b) { return - a; }

// Real functions:

MY_DLL_API float afabsf(float a) { return fabsf(a); }
MY_DLL_API float aexpf(float a) { return expf(a); }
MY_DLL_API float alogf(float a) { return logf(a); }
MY_DLL_API float apowf(float a, float b) { return powf(a, b); }
MY_DLL_API float asqrtf(float a) { return sqrtf(a); }
MY_DLL_API float bsinf(float a) { return sinf(a); }
MY_DLL_API float bcosf(float a) { return cosf(a); }
MY_DLL_API float btanf(float a) { return tanf(a); }
MY_DLL_API float aasinf(float a) { return asinf(a); }
MY_DLL_API float aacosf(float a) { return acosf(a); }
MY_DLL_API float aatanf(float a) { return atanf(a); }
MY_DLL_API float bsinhf(float a) { return sinhf(a); }
MY_DLL_API float bcoshf(float a) { return coshf(a); }
MY_DLL_API float btanhf(float a) { return tanhf(a); }
MY_DLL_API float aasinhf(float a) { return asinhf(a); }
MY_DLL_API float aacoshf(float a) { return acoshf(a); }
MY_DLL_API float aatanhf(float a) { return atanhf(a); }

MY_DLL_API double afabs(double a) { return fabs(a); }
MY_DLL_API double aexp(double a) { return exp(a); }
MY_DLL_API double alog(double a) { return log(a); }
MY_DLL_API double apow(double a, double b) { return pow(a, b); }
MY_DLL_API double asqrt(double a) { return sqrt(a); }
MY_DLL_API double bsin(double a) { return sin(a); }
MY_DLL_API double bcos(double a) { return cos(a); }
MY_DLL_API double btan(double a) { return tan(a); }
MY_DLL_API double aasin(double a) { return asin(a); }
MY_DLL_API double aacos(double a) { return acos(a); }
MY_DLL_API double aatan(double a) { return atan(a); }
MY_DLL_API double bsinh(double a) { return sinh(a); }
MY_DLL_API double bcosh(double a) { return cosh(a); }
MY_DLL_API double btanh(double a) { return tanh(a); }
MY_DLL_API double aasinh(double a) { return asinh(a); }
MY_DLL_API double aacosh(double a) { return acosh(a); }
MY_DLL_API double aatanh(double a) { return atanh(a); }

// REAL Only functions:

MY_DLL_API float aatan2f(float a, float b) { return atan2f(a, b); }
MY_DLL_API float acbrtf(float a) { return cbrtf(a); }
MY_DLL_API float aceilf(float a) { return ceilf(a); }
MY_DLL_API float acopysignf(float a, float b) { return copysignf(a, b); }
MY_DLL_API float aerfa(float a) { return erff(a); }
MY_DLL_API float aerfcf(float a) { return erfcf(a); }
MY_DLL_API float aexp2f(float a) { return exp2f(a); }
MY_DLL_API float aexpm1f(float a) { return expm1f(a); }
MY_DLL_API float afdimf(float a, float b) { return fdimf(a, b); }
MY_DLL_API float afloorf(float a) { return floorf(a); }
MY_DLL_API float afmaf(float a, float b, float c) { return fmaf(a, b, c); }
MY_DLL_API float afmaxf(float a, float b) { return fmaxf(a, b); }
MY_DLL_API float afminf(float a, float b) { return fminf(a, b); }
MY_DLL_API float afmodf(float a, float b) { return fmodf(a, b); }
MY_DLL_API float afrexpf(float a, int *idst) { return frexpf(a, idst); }
MY_DLL_API float ahypotf(float a, float b) { return hypotf(a, b); }
MY_DLL_API int ailogbf(float a) { return ilogbf(a); }
MY_DLL_API float aldexpf(float a, int i) { return ldexpf(a, i); }
MY_DLL_API float algammaf(float a) { return lgammaf(a); }
MY_DLL_API long long allrintf(float a) { return llrintf(a); }
MY_DLL_API long long allroundf(float a) { return llroundf(a); }
MY_DLL_API float alog10f(float a) { return log10f(a); }
MY_DLL_API float alog1pf(float a) { return log1pf(a); }
MY_DLL_API float alog2f(float a) { return log2f(a); }
MY_DLL_API float alogbf(float a) { return logbf(a); }
MY_DLL_API long alrintf(float a) { return lrintf(a); }
MY_DLL_API long alroundf(float a) { return lroundf(a); }
MY_DLL_API float anearbyintf(float a) { return nearbyintf(a); }
MY_DLL_API float anextafterf(float a, float b) { return nextafterf(a, b); }
MY_DLL_API float anexttowardf(float a, long double ld) { return nexttowardf(a, ld); }
MY_DLL_API float aremainderf(float a, float b) { return remainderf(a, b); }
MY_DLL_API float aremquof(float a, float b, int *idst) { return remquof(a, b, idst); }
MY_DLL_API float arintf(float a) { return rintf(a); }
MY_DLL_API float aroundf(float a) { return roundf(a); }
MY_DLL_API float ascalblnf(float a, long il) { return scalblnf(a, il); }
MY_DLL_API float ascalbnf(float a, int i) { return scalbnf(a, i); }
MY_DLL_API float atgammaf(float a) { return tgammaf(a); }
MY_DLL_API float atruncf(float a) { return truncf(a); }

MY_DLL_API double aatan2(double a, double b) { return atan2(a, b); }
MY_DLL_API double acbrt(double a) { return cbrt(a); }
MY_DLL_API double aceil(double a) { return ceil(a); }
MY_DLL_API double acopysign(double a, double b) { return copysign(a, b); }
MY_DLL_API double aerf(double a) { return erf(a); }
MY_DLL_API double aerfc(double a) { return erfc(a); }
MY_DLL_API double aexp2(double a) { return exp2(a); }
MY_DLL_API double aexpm1(double a) { return expm1(a); }
MY_DLL_API double afdim(double a, double b) { return fdim(a, b); }
MY_DLL_API double afloor(double a) { return floor(a); }
MY_DLL_API double afma(double a, double b, double c) { return fma(a, b, c); }
MY_DLL_API double afmax(double a, double b) { return fmax(a, b); }
MY_DLL_API double afmin(double a, double b) { return fmin(a, b); }
MY_DLL_API double afmod(double a, double b) { return fmod(a, b); }
MY_DLL_API double afrexp(double a, int *idst) { return frexp(a, idst); }
MY_DLL_API double ahypot(double a, double b) { return hypot(a, b); }
MY_DLL_API int ailogb(double a) { return ilogb(a); }
MY_DLL_API double aldexp(double a, int i) { return ldexp(a, i); }
MY_DLL_API double algamma(double a) { return lgamma(a); }
MY_DLL_API long long allrint(double a) { return llrint(a); }
MY_DLL_API long long allround(double a) { return llround(a); }
MY_DLL_API double alog10(double a) { return log10(a); }
MY_DLL_API double alog1p(double a) { return log1p(a); }
MY_DLL_API double alog2(double a) { return log2(a); }
MY_DLL_API double alogb(double a) { return logb(a); }
MY_DLL_API long alrint(double a) { return lrint(a); }
MY_DLL_API long alround(double a) { return lround(a); }
MY_DLL_API double anearbyint(double a) { return nearbyint(a); }
MY_DLL_API double anextafter(double a, double b) { return nextafter(a, b); }
MY_DLL_API double anexttoward(double a, long double ld) { return nexttoward(a, ld); }
MY_DLL_API double aremainder(double a, double b) { return remainder(a, b); }
MY_DLL_API double aremquo(double a, double b, int *idst) { return remquo(a, b, idst); }
MY_DLL_API double arint(double a) { return rint(a); }
MY_DLL_API double around(double a) { return round(a); }
MY_DLL_API double ascalbln(double a, long il) { return scalbln(a, il); }
MY_DLL_API double ascalbn(double a, int i) { return scalbn(a, i); }
MY_DLL_API double atgamma(double a) { return tgamma(a); }
MY_DLL_API double atrunc(double a) { return trunc(a); }

/*
Classification macro / functions
*/

MY_DLL_API int afpclassifyf(float a) { return (int)fpclassify(a); }
MY_DLL_API int aisfinitef(float a) { return (int)isfinite(a); }
MY_DLL_API int aisinfa(float a) { return (int)isinf(a); }
MY_DLL_API int aisnanf(float a) { return (int)isnan(a); }
MY_DLL_API int aisnormalf(float a) { return (int)isnormal(a); }
MY_DLL_API int asignbitf(float a) { return (int)signbit(a); }

MY_DLL_API int afpclassify(double a) { return (int)fpclassify(a); }
MY_DLL_API int aisfinite(double a) { return (int)isfinite(a); }
MY_DLL_API int aisinf(double a) { return (int)isinf(a); }
MY_DLL_API int aisnan(double a) { return (int)isnan(a); }
MY_DLL_API int aisnormal(double a) { return (int)isnormal(a); }
MY_DLL_API int asignbit(double a) { return (int)signbit(a); }

/*
Comparison macro / functions
*/

MY_DLL_API int aisgreaterf(float a, float b) { return (int)isgreater(a, b); }
MY_DLL_API int aisgreaterequalf(float a, float b) { return (int)isgreaterequal(a, b); }
MY_DLL_API int aislessf(float a, float b) { return (int)isless(a, b); }
MY_DLL_API int aislessequalf(float a, float b) { return (int)islessequal(a, b); }
MY_DLL_API int aislessgreaterf(float a, float b) { return (int)islessgreater(a, b); }
MY_DLL_API int aisunorderedf(float a, float b) { return (int)isunordered(a, b); }

MY_DLL_API int aisgreater(double a, double b) { return (int)isgreater(a, b); }
MY_DLL_API int aisgreaterequal(double a, double b) { return (int)isgreaterequal(a, b); }
MY_DLL_API int aisless(double a, double b) { return (int)isless(a, b); }
MY_DLL_API int aislessequal(double a, double b) { return (int)islessequal(a, b); }
MY_DLL_API int aislessgreater(double a, double b) { return (int)islessgreater(a, b); }
MY_DLL_API int aisunordered(double a, double b) { return (int)isunordered(a, b); }

// From String, to float or double:
// "endptr" can be NULL (0).

MY_DLL_API float astrtof(const char * str, char ** endptr) { return strtof(str, endptr); }
MY_DLL_API double astrtod(const char * str, char ** endptr) { return strtod(str, endptr); }

// To String, from float or double:

MY_DLL_API int asnprintfa(char * buffer, size_t sizeOfBuffer, const char * format, float a) { return snprintf(buffer, sizeOfBuffer, format, a); }
MY_DLL_API int asnprintfd(char * buffer, size_t sizeOfBuffer, const char * format, double a) { return snprintf(buffer, sizeOfBuffer, format, a); }

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
