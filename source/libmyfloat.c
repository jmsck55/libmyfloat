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

float Add(float a, float b)
{
    return a + b;
}
float Subtract(float a, float b)
{
    return a - b;
}
float Multiply(float a, float b)
{
    return a * b;
}
float Divide(float a, float b)
{
    return a / b;
}
float Negate(float a)
{
    return - a;
}

/*
Trigonometric functions
*/

float fcos(float a)
{
    return cos(a);
}
float fsin(float a)
{
    return sin(a);
}
float ftan(float a)
{
    return tan(a);
}
float facos(float a)
{
    return acos(a);
}
float fasin(float a)
{
    return asin(a);
}
float fatan(float a)
{
    return atan(a);
}
float fatan2(float a, float b)
{
    return atan2(a, b);
}

/*
Hyperbolic functions
*/

float fcosh(float a)
{
    return cosh(a);
}
float fsinh(float a)
{
    return sinh(a);
}
float ftanh(float a)
{
    return tanh(a);
}
float facosh(float a)
{
    return acosh(a);
}
float fasinh(float a)
{
    return asinh(a);
}
float fatanh(float a)
{
    return atanh(a);
}

/*
Exponential and logarithmic functions
*/

float fexp(float a)
{
    return exp(a);
}
float ffrexp(float a, int * exp1)
{
    return frexp(a, exp1);
}
float fldexp(float a, int exp1)
{
    return ldexp(a, exp1);
}
float flog(float a)
{
    return log(a);
}
float flog10(float a)
{
    return log10(a);
}
float modfj(float a, float * intpart)
{
    return modff(a, intpart);
}
float fexp2(float a)
{
    return exp2(a);
}
float fexpm1(float a)
{
    return expm1(a);
}
float filogb(float a)
{
    return ilogb(a);
}
float flog1p(float a)
{
    return log1p(a);
}
float flog2(float a)
{
    return log2(a);
}
float flogb(float a)
{
    return logb(a);
}
float fscalbnf(float a, int n)
{
    return scalbnf(a, n);
}
float fscalblnf(float a, long int n)
{
    return scalblnf(a, n);
}

/*
Power functions
*/

float fpow(float a, float b)
{
    return pow(a, b);
}
float fsqrt(float a)
{
    return sqrt(a);
}
float fcbrt(float a)
{
    return cbrt(a);
}
float fhypot(float a, float b)
{
    return hypot(a, b);
}

/*
Error and gamma functions
*/

float ferf(float a)
{
    return erf(a);
}
float ferfc(float a)
{
    return erfc(a);
}
float ftgamma(float a)
{
    return tgamma(a);
}
float flgamma(float a)
{
    return lgamma(a);
}

/*
Rounding and remainder functions
*/

float fceil(float a)
{
    return ceil(a);
}
float ffloor(float a)
{
    return floor(a);
}
float ffmod(float a, float b)
{
    return fmod(a, b);
}
float ftrunc(float a)
{
    return trunc(a);
}
float fround(float a)
{
    return round(a);
}
float flround(float a)
{
    return lround(a);
}
float fllround(float a)
{
    return llround(a);
}
float frint(float a)
{
    return rint(a);
}
float flrint(float a)
{
    return lrint(a);
}
float fllrint(float a)
{
    return llrint(a);
}
float fnearbyint(float a)
{
    return nearbyint(a);
}
float fremainder(float a, float b)
{
    return remainder(a, b);
}
float fremquo(float numer, float denom, int * quot)
{
    return remquo(numer, denom, quot);
}

/*
Floating-point manipulation functions
*/

float fcopysign(float x, float y)
{
    return copysign(x, y);
}
float fnan(const char* tagp)
{
    return nan(tagp);
}
float fnextafter(float x, float y)
{
    return nextafterf(x, y);
}
float fnexttoward(float x, long double y)
{
    return nexttowardf(x, y);
}

/*
Minimum, maximum, difference functions
*/

float fdimj(float a, float b)
{
    return fdim(a, b);
}
float fmaxj(float a, float b)
{
    return fmax(a, b);
}
float fminj(float a, float b)
{
    return fmin(a, b);
}

/*
Other functions
*/

float fabsj(float a)
{
    return fabs(a);
}
float fmaj(float x, float y, float z)
{
    return fma(x, y, z);
}

/*
Classification macro / functions
*/

int fpclassifyj(float a)
{
    return fpclassify(a);
}
int isfinitej(float a)
{
    return isfinite(a);
}
int isinfj(float a)
{
    return isinf(a);
}
int isnanj(float a)
{
    return isnan(a);
}
int isnormalj(float a)
{
    return isnormal(a);
}
int signbitj(float a)
{
    return signbit(a);
}

/*
Comparison macro / functions
*/

int isgreaterj(float a, float b)
{
    return (int)isgreater(a, b);
}
int isgreaterequalj(float a, float b)
{
    return (int)isgreaterequal(a, b);
}
int islessj(float a, float b)
{
    return (int)isless(a, b);
}
int islessequalj(float a, float b)
{
    return (int)islessequal(a, b);
}
int islessgreaterj(float a, float b)
{
    return (int)islessgreater(a, b);
}
int isunorderedj(float a, float b)
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
