// Copyright (c) 2023 James Cook
//
//  libmyfloat32.h
//  libmyfloat32
//
//  Created by James Cook on 3/6/23.
//

#ifndef libmyfloat32_h
#define libmyfloat32_h

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

//#include <stdio.h>

extern float Add(float a, float b);
extern float Subtract(float a, float b);
extern float Multiply(float a, float b);
extern float Divide(float a, float b);
extern float Negate(float a);

/*
Trigonometric functions
*/

extern float fcos(float a);
extern float fsin(float a);
extern float ftan(float a);
extern float facos(float a);
extern float fasin(float a);
extern float fatan(float a);
extern float fatan2(float a, float b);

/*
Hyperbolic functions
*/

extern float fcosh(float a);
extern float fsinh(float a);
extern float ftanh(float a);
extern float facosh(float a);
extern float fasinh(float a);
extern float fatanh(float a);

/*
Exponential and logarithmic functions
*/

extern float fexp(float a);
extern float ffrexp(float a, int * exp1);
extern float fldexp(float a, int exp1);
extern float flog(float a);
extern float flog10(float a);
extern float modfj(float a, float * intpart);
extern float fexp2(float a);
extern float fexpm1(float a);
extern float filogb(float a);
extern float flog1p(float a);
extern float flog2(float a);
extern float flogb(float a);
extern float fscalbnf(float a, int n);
extern float fscalblnf(float a, long int n);

/*
Power functions
*/

extern float fpow(float a, float b);
extern float fsqrt(float a);
extern float fcbrt(float a);
extern float fhypot(float a, float b);

/*
Error and gamma functions
*/

extern float ferf(float a);
extern float ferfc(float a);
extern float ftgamma(float a);
extern float flgamma(float a);

/*
Rounding and remainder functions
*/

extern float fceil(float a);
extern float ffloor(float a);
extern float ffmod(float a, float b);
extern float ftrunc(float a);
extern float fround(float a);
extern float flround(float a);
extern float fllround(float a);
extern float frint(float a);
extern float flrint(float a);
extern float fllrint(float a);
extern float fnearbyint(float a);
extern float fremainder(float a, float b);
extern float fremquo(float numer, float denom, int * quot);

/*
Floating-point manipulation functions
*/

extern float fcopysign(float x, float y);
extern float fnan(const char* tagp);
extern float fnextafter(float x, float y);
extern float fnexttoward(float x, long double y);

/*
Minimum, maximum, difference functions
*/

extern float fdimj(float a, float b);
extern float fmaxj(float a, float b);
extern float fminj(float a, float b);

/*
Other functions
*/

extern float fabsj(float a);
extern float fmaj(float x, float y, float z);

/*
Classification macro / functions
*/

extern int fpclassifyj(float a);
extern int isfinitej(float a);
extern int isinfj(float a);
extern int isnanj(float a);
extern int isnormalj(float a);
extern int signbitj(float a);

/*
Comparison macro / functions
*/

extern int isgreaterj(float a, float b);
extern int isgreaterequalj(float a, float b);
extern int islessj(float a, float b);
extern int islessequalj(float a, float b);
extern int islessgreaterj(float a, float b);
extern int isunorderedj(float a, float b);

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


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* libmyfloat32_h */
