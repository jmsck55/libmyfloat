// Copyright (c) 2023 James Cook
//
//  libmyfloat32.h
//  libmyfloat32
//
//  Created by James Cook on 3/6/23.
//

#ifndef libmyfloat32_h
#define libmyfloat32_h

#include "dllmacros.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

MY_DLL_API MY_EXTERN float Add(float a, float b);
MY_DLL_API MY_EXTERN float Subtract(float a, float b);
MY_DLL_API MY_EXTERN float Multiply(float a, float b);
MY_DLL_API MY_EXTERN float Divide(float a, float b);
MY_DLL_API MY_EXTERN float Negate(float a);

/*
Trigonometric functions
*/

MY_DLL_API MY_EXTERN float fcos(float a);
MY_DLL_API MY_EXTERN float fsin(float a);
MY_DLL_API MY_EXTERN float ftan(float a);
MY_DLL_API MY_EXTERN float facos(float a);
MY_DLL_API MY_EXTERN float fasin(float a);
MY_DLL_API MY_EXTERN float fatan(float a);
MY_DLL_API MY_EXTERN float fatan2(float a, float b);

/*
Hyperbolic functions
*/

MY_DLL_API MY_EXTERN float fcosh(float a);
MY_DLL_API MY_EXTERN float fsinh(float a);
MY_DLL_API MY_EXTERN float ftanh(float a);
MY_DLL_API MY_EXTERN float facosh(float a);
MY_DLL_API MY_EXTERN float fasinh(float a);
MY_DLL_API MY_EXTERN float fatanh(float a);

/*
Exponential and logarithmic functions
*/

MY_DLL_API MY_EXTERN float fexp(float a);
MY_DLL_API MY_EXTERN float ffrexp(float a, int * exp1);
MY_DLL_API MY_EXTERN float fldexp(float a, int exp1);
MY_DLL_API MY_EXTERN float flog(float a);
MY_DLL_API MY_EXTERN float flog10(float a);
MY_DLL_API MY_EXTERN float modfj(float a, float * intpart);
MY_DLL_API MY_EXTERN float fexp2(float a);
MY_DLL_API MY_EXTERN float fexpm1(float a);
MY_DLL_API MY_EXTERN float filogb(float a);
MY_DLL_API MY_EXTERN float flog1p(float a);
MY_DLL_API MY_EXTERN float flog2(float a);
MY_DLL_API MY_EXTERN float flogb(float a);
MY_DLL_API MY_EXTERN float fscalbnf(float a, int n);
MY_DLL_API MY_EXTERN float fscalblnf(float a, long int n);

/*
Power functions
*/

MY_DLL_API MY_EXTERN float fpow(float a, float b);
MY_DLL_API MY_EXTERN float fsqrt(float a);
MY_DLL_API MY_EXTERN float fcbrt(float a);
MY_DLL_API MY_EXTERN float fhypot(float a, float b);

/*
Error and gamma functions
*/

MY_DLL_API MY_EXTERN float ferf(float a);
MY_DLL_API MY_EXTERN float ferfc(float a);
MY_DLL_API MY_EXTERN float ftgamma(float a);
MY_DLL_API MY_EXTERN float flgamma(float a);

/*
Rounding and remainder functions
*/

MY_DLL_API MY_EXTERN float fceil(float a);
MY_DLL_API MY_EXTERN float ffloor(float a);
MY_DLL_API MY_EXTERN float ffmod(float a, float b);
MY_DLL_API MY_EXTERN float ftrunc(float a);
MY_DLL_API MY_EXTERN float fround(float a);
MY_DLL_API MY_EXTERN float flround(float a);
MY_DLL_API MY_EXTERN float fllround(float a);
MY_DLL_API MY_EXTERN float frint(float a);
MY_DLL_API MY_EXTERN float flrint(float a);
MY_DLL_API MY_EXTERN float fllrint(float a);
MY_DLL_API MY_EXTERN float fnearbyint(float a);
MY_DLL_API MY_EXTERN float fremainder(float a, float b);
MY_DLL_API MY_EXTERN float fremquo(float numer, float denom, int * quot);

/*
Floating-point manipulation functions
*/

MY_DLL_API MY_EXTERN float fcopysign(float x, float y);
MY_DLL_API MY_EXTERN float fnan(const char* tagp);
MY_DLL_API MY_EXTERN float fnextafter(float x, float y);
MY_DLL_API MY_EXTERN float fnexttoward(float x, long double y);

/*
Minimum, maximum, difference functions
*/

MY_DLL_API MY_EXTERN float fdimj(float a, float b);
MY_DLL_API MY_EXTERN float fmaxj(float a, float b);
MY_DLL_API MY_EXTERN float fminj(float a, float b);

/*
Other functions
*/

MY_DLL_API MY_EXTERN float fabsj(float a);
MY_DLL_API MY_EXTERN float fmaj(float x, float y, float z);

/*
Classification macro / functions
*/

MY_DLL_API MY_EXTERN int fpclassifyj(float a);
MY_DLL_API MY_EXTERN int isfinitej(float a);
MY_DLL_API MY_EXTERN int isinfj(float a);
MY_DLL_API MY_EXTERN int isnanj(float a);
MY_DLL_API MY_EXTERN int isnormalj(float a);
MY_DLL_API MY_EXTERN int signbitj(float a);

/*
Comparison macro / functions
*/

MY_DLL_API MY_EXTERN int isgreaterj(float a, float b);
MY_DLL_API MY_EXTERN int isgreaterequalj(float a, float b);
MY_DLL_API MY_EXTERN int islessj(float a, float b);
MY_DLL_API MY_EXTERN int islessequalj(float a, float b);
MY_DLL_API MY_EXTERN int islessgreaterj(float a, float b);
MY_DLL_API MY_EXTERN int isunorderedj(float a, float b);

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
