// Copyright (c) 2023 James Cook
//
//  libmyfloat32.c
//  libmyfloat32
//
//  Created by James Cook on 3/6/23.
//

#include <tgmath.h>

//--here, put in complex functions:

//#include <complex.h>

#include "libmyfloat.h"

MY_DLL_API float Add(float a, float b)
{
    return a + b;
}
MY_DLL_API float Subtract(float a, float b)
{
    return a - b;
}
MY_DLL_API float Multiply(float a, float b)
{
    return a * b;
}
MY_DLL_API float Divide(float a, float b)
{
    return a / b;
}
MY_DLL_API float Negate(float a)
{
    return - a;
}

/*
Trigonometric functions
*/

MY_DLL_API float fcos(float a)
{
    return cos(a);
}
MY_DLL_API float fsin(float a)
{
    return sin(a);
}
MY_DLL_API float ftan(float a)
{
    return tan(a);
}
MY_DLL_API float facos(float a)
{
    return acos(a);
}
MY_DLL_API float fasin(float a)
{
    return asin(a);
}
MY_DLL_API float fatan(float a)
{
    return atan(a);
}
MY_DLL_API float fatan2(float a, float b)
{
    return atan2(a, b);
}

/*
Hyperbolic functions
*/

MY_DLL_API float fcosh(float a)
{
    return cosh(a);
}
MY_DLL_API float fsinh(float a)
{
    return sinh(a);
}
MY_DLL_API float ftanh(float a)
{
    return tanh(a);
}
MY_DLL_API float facosh(float a)
{
    return acosh(a);
}
MY_DLL_API float fasinh(float a)
{
    return asinh(a);
}
MY_DLL_API float fatanh(float a)
{
    return atanh(a);
}

/*
Exponential and logarithmic functions
*/

MY_DLL_API float fexp(float a)
{
    return exp(a);
}
MY_DLL_API float ffrexp(float a, int * exp1)
{
    return frexp(a, exp1);
}
MY_DLL_API float fldexp(float a, int exp1)
{
    return ldexp(a, exp1);
}
MY_DLL_API float flog(float a)
{
    return log(a);
}
MY_DLL_API float flog10(float a)
{
    return log10(a);
}
MY_DLL_API float modfj(float a, float * intpart)
{
    return modff(a, intpart);
}
MY_DLL_API float fexp2(float a)
{
    return exp2(a);
}
MY_DLL_API float fexpm1(float a)
{
    return expm1(a);
}
MY_DLL_API float filogb(float a)
{
    return ilogb(a);
}
MY_DLL_API float flog1p(float a)
{
    return log1p(a);
}
MY_DLL_API float flog2(float a)
{
    return log2(a);
}
MY_DLL_API float flogb(float a)
{
    return logb(a);
}
MY_DLL_API float fscalbnf(float a, int n)
{
    return scalbnf(a, n);
}
MY_DLL_API float fscalblnf(float a, long int n)
{
    return scalblnf(a, n);
}

/*
Power functions
*/

MY_DLL_API float fpow(float a, float b)
{
    return pow(a, b);
}
MY_DLL_API float fsqrt(float a)
{
    return sqrt(a);
}
MY_DLL_API float fcbrt(float a)
{
    return cbrt(a);
}
MY_DLL_API float fhypot(float a, float b)
{
    return hypot(a, b);
}

/*
Error and gamma functions
*/

MY_DLL_API float ferf(float a)
{
    return erf(a);
}
MY_DLL_API float ferfc(float a)
{
    return erfc(a);
}
MY_DLL_API float ftgamma(float a)
{
    return tgamma(a);
}
MY_DLL_API float flgamma(float a)
{
    return lgamma(a);
}

/*
Rounding and remainder functions
*/

MY_DLL_API float fceil(float a)
{
    return ceil(a);
}
MY_DLL_API float ffloor(float a)
{
    return floor(a);
}
MY_DLL_API float ffmod(float a, float b)
{
    return fmod(a, b);
}
MY_DLL_API float ftrunc(float a)
{
    return trunc(a);
}
MY_DLL_API float fround(float a)
{
    return round(a);
}
MY_DLL_API float flround(float a)
{
    return lround(a);
}
MY_DLL_API float fllround(float a)
{
    return llround(a);
}
MY_DLL_API float frint(float a)
{
    return rint(a);
}
MY_DLL_API float flrint(float a)
{
    return lrint(a);
}
MY_DLL_API float fllrint(float a)
{
    return llrint(a);
}
MY_DLL_API float fnearbyint(float a)
{
    return nearbyint(a);
}
MY_DLL_API float fremainder(float a, float b)
{
    return remainder(a, b);
}
MY_DLL_API float fremquo(float numer, float denom, int * quot)
{
    return remquo(numer, denom, quot);
}

/*
Floating-point manipulation functions
*/

MY_DLL_API float fcopysign(float x, float y)
{
    return copysign(x, y);
}
MY_DLL_API float fnan(const char* tagp)
{
    return nan(tagp);
}
MY_DLL_API float fnextafter(float x, float y)
{
    return nextafterf(x, y);
}
MY_DLL_API float fnexttoward(float x, long double y)
{
    return nexttowardf(x, y);
}

/*
Minimum, maximum, difference functions
*/

MY_DLL_API float fdimj(float a, float b)
{
    return fdim(a, b);
}
MY_DLL_API float fmaxj(float a, float b)
{
    return fmax(a, b);
}
MY_DLL_API float fminj(float a, float b)
{
    return fmin(a, b);
}

/*
Other functions
*/

MY_DLL_API float fabsj(float a)
{
    return fabs(a);
}
MY_DLL_API float fmaj(float x, float y, float z)
{
    return fma(x, y, z);
}

/*
Classification macro / functions
*/

MY_DLL_API int fpclassifyj(float a)
{
    return fpclassify(a);
}
MY_DLL_API int isfinitej(float a)
{
    return isfinite(a);
}
MY_DLL_API int isinfj(float a)
{
    return isinf(a);
}
MY_DLL_API int isnanj(float a)
{
    return isnan(a);
}
MY_DLL_API int isnormalj(float a)
{
    return isnormal(a);
}
MY_DLL_API int signbitj(float a)
{
    return signbit(a);
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
