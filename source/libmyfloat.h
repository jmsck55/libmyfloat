// Copyright (c) 2023 James Cook
//
//  libmyfloat.h
//  libmyfloat
//
//  Created by James Cook on 3/6/23.
//
//  Header file for libmyfloat.c
//

#ifndef libmyfloat_h
#define libmyfloat_h

#include <stddef.h>

#include "dllmacros.h"

#define FLOAT_VERSION 3LL

// Code for "C" library:

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

// Library Version:

MY_DLL_API MY_EXTERN int SizeOfLong();
MY_DLL_API MY_EXTERN int SizeOfLongDouble();
MY_DLL_API MY_EXTERN long long FloatVersion();

// Simple arithmetic:

MY_DLL_API MY_EXTERN float aaddf(float a, float b);
MY_DLL_API MY_EXTERN float asubtractf(float a, float b);
MY_DLL_API MY_EXTERN float amultiplyf(float a, float b);
MY_DLL_API MY_EXTERN float adividef(float a, float b);
MY_DLL_API MY_EXTERN float anegatef(float a);

MY_DLL_API MY_EXTERN double aadd(double a, double b);
MY_DLL_API MY_EXTERN double asubtract(double a, double b);
MY_DLL_API MY_EXTERN double amultiply(double a, double b);
MY_DLL_API MY_EXTERN double adivide(double a, double b);
MY_DLL_API MY_EXTERN double anegate(double a);

// Real functions:

MY_DLL_API MY_EXTERN float afabsf(float a);
MY_DLL_API MY_EXTERN float aexpf(float a);
MY_DLL_API MY_EXTERN float alogf(float a);
MY_DLL_API MY_EXTERN float apowf(float a, float b);
MY_DLL_API MY_EXTERN float asqrtf(float a);
MY_DLL_API MY_EXTERN float bsinf(float a);
MY_DLL_API MY_EXTERN float bcosf(float a);
MY_DLL_API MY_EXTERN float btanf(float a);
MY_DLL_API MY_EXTERN float aasinf(float a);
MY_DLL_API MY_EXTERN float aacosf(float a);
MY_DLL_API MY_EXTERN float aatanf(float a);
MY_DLL_API MY_EXTERN float bsinhf(float a);
MY_DLL_API MY_EXTERN float bcoshf(float a);
MY_DLL_API MY_EXTERN float btanhf(float a);
MY_DLL_API MY_EXTERN float aasinhf(float a);
MY_DLL_API MY_EXTERN float aacoshf(float a);
MY_DLL_API MY_EXTERN float aatanhf(float a);

MY_DLL_API MY_EXTERN double afabs(double a);
MY_DLL_API MY_EXTERN double aexp(double a);
MY_DLL_API MY_EXTERN double alog(double a);
MY_DLL_API MY_EXTERN double apow(double a, double b);
MY_DLL_API MY_EXTERN double asqrt(double a);
MY_DLL_API MY_EXTERN double bsin(double a);
MY_DLL_API MY_EXTERN double bcos(double a);
MY_DLL_API MY_EXTERN double btan(double a);
MY_DLL_API MY_EXTERN double aasin(double a);
MY_DLL_API MY_EXTERN double aacos(double a);
MY_DLL_API MY_EXTERN double aatan(double a);
MY_DLL_API MY_EXTERN double bsinh(double a);
MY_DLL_API MY_EXTERN double bcosh(double a);
MY_DLL_API MY_EXTERN double btanh(double a);
MY_DLL_API MY_EXTERN double aasinh(double a);
MY_DLL_API MY_EXTERN double aacosh(double a);
MY_DLL_API MY_EXTERN double aatanh(double a);

// REAL Only functions:

MY_DLL_API MY_EXTERN float aatan2f(float a, float b);
MY_DLL_API MY_EXTERN float acbrtf(float a);
MY_DLL_API MY_EXTERN float aceilf(float a);
MY_DLL_API MY_EXTERN float acopysignf(float a, float b);
MY_DLL_API MY_EXTERN float aerfa(float a);
MY_DLL_API MY_EXTERN float aerfcf(float a);
MY_DLL_API MY_EXTERN float aexp2f(float a);
MY_DLL_API MY_EXTERN float aexpm1f(float a);
MY_DLL_API MY_EXTERN float afdimf(float a, float b);
MY_DLL_API MY_EXTERN float afloorf(float a);
MY_DLL_API MY_EXTERN float afmaf(float a, float b, float c);
MY_DLL_API MY_EXTERN float afmaxf(float a, float b);
MY_DLL_API MY_EXTERN float afminf(float a, float b);
MY_DLL_API MY_EXTERN float afmodf(float a, float b);
MY_DLL_API MY_EXTERN float afrexpf(float a, int *idst);
MY_DLL_API MY_EXTERN float ahypotf(float a, float b);
MY_DLL_API MY_EXTERN int ailogbf(float a);
MY_DLL_API MY_EXTERN float aldexpf(float a, int i);
MY_DLL_API MY_EXTERN float algammaf(float a);
MY_DLL_API MY_EXTERN long long allrintf(float a);
MY_DLL_API MY_EXTERN long long allroundf(float a);
MY_DLL_API MY_EXTERN float alog10f(float a);
MY_DLL_API MY_EXTERN float alog1pf(float a);
MY_DLL_API MY_EXTERN float alog2f(float a);
MY_DLL_API MY_EXTERN float alogbf(float a);
MY_DLL_API MY_EXTERN long alrintf(float a);
MY_DLL_API MY_EXTERN long alroundf(float a);
MY_DLL_API MY_EXTERN float anearbyintf(float a);
MY_DLL_API MY_EXTERN float anextafterf(float a, float b);
MY_DLL_API MY_EXTERN float anexttowardf(float a, long double ld);
MY_DLL_API MY_EXTERN float aremainderf(float a, float b);
MY_DLL_API MY_EXTERN float aremquof(float a, float b, int *idst);
MY_DLL_API MY_EXTERN float arintf(float a);
MY_DLL_API MY_EXTERN float aroundf(float a);
MY_DLL_API MY_EXTERN float ascalblnf(float a, long il);
MY_DLL_API MY_EXTERN float ascalbnf(float a, int i);
MY_DLL_API MY_EXTERN float atgammaf(float a);
MY_DLL_API MY_EXTERN float atruncf(float a);

MY_DLL_API MY_EXTERN double aatan2(double a, double b);
MY_DLL_API MY_EXTERN double acbrt(double a);
MY_DLL_API MY_EXTERN double aceil(double a);
MY_DLL_API MY_EXTERN double acopysign(double a, double b);
MY_DLL_API MY_EXTERN double aerf(double a);
MY_DLL_API MY_EXTERN double aerfc(double a);
MY_DLL_API MY_EXTERN double aexp2(double a);
MY_DLL_API MY_EXTERN double aexpm1(double a);
MY_DLL_API MY_EXTERN double afdim(double a, double b);
MY_DLL_API MY_EXTERN double afloor(double a);
MY_DLL_API MY_EXTERN double afma(double a, double b, double c);
MY_DLL_API MY_EXTERN double afmax(double a, double b);
MY_DLL_API MY_EXTERN double afmin(double a, double b);
MY_DLL_API MY_EXTERN double afmod(double a, double b);
MY_DLL_API MY_EXTERN double afrexp(double a, int *idst);
MY_DLL_API MY_EXTERN double ahypot(double a, double b);
MY_DLL_API MY_EXTERN int ailogb(double a);
MY_DLL_API MY_EXTERN double aldexp(double a, int i);
MY_DLL_API MY_EXTERN double algamma(double a);
MY_DLL_API MY_EXTERN long long allrint(double a);
MY_DLL_API MY_EXTERN long long allround(double a);
MY_DLL_API MY_EXTERN double alog10(double a);
MY_DLL_API MY_EXTERN double alog1p(double a);
MY_DLL_API MY_EXTERN double alog2(double a);
MY_DLL_API MY_EXTERN double alogb(double a);
MY_DLL_API MY_EXTERN long alrint(double a);
MY_DLL_API MY_EXTERN long alround(double a);
MY_DLL_API MY_EXTERN double anearbyint(double a);
MY_DLL_API MY_EXTERN double anextafter(double a, double b);
MY_DLL_API MY_EXTERN double anexttoward(double a, long double ld);
MY_DLL_API MY_EXTERN double aremainder(double a, double b);
MY_DLL_API MY_EXTERN double aremquo(double a, double b, int *idst);
MY_DLL_API MY_EXTERN double arint(double a);
MY_DLL_API MY_EXTERN double around(double a);
MY_DLL_API MY_EXTERN double ascalbln(double a, long il);
MY_DLL_API MY_EXTERN double ascalbn(double a, int i);
MY_DLL_API MY_EXTERN double atgamma(double a);
MY_DLL_API MY_EXTERN double atrunc(double a);


/*
Classification macro / functions
*/

MY_DLL_API MY_EXTERN int afpclassifyf(float a);
MY_DLL_API MY_EXTERN int aisfinitef(float a);
MY_DLL_API MY_EXTERN int aisinfa(float a);
MY_DLL_API MY_EXTERN int aisnanf(float a);
MY_DLL_API MY_EXTERN int aisnormalf(float a);
MY_DLL_API MY_EXTERN int asignbitf(float a);

MY_DLL_API MY_EXTERN int afpclassify(double a);
MY_DLL_API MY_EXTERN int aisfinite(double a);
MY_DLL_API MY_EXTERN int aisinf(double a);
MY_DLL_API MY_EXTERN int aisnan(double a);
MY_DLL_API MY_EXTERN int aisnormal(double a);
MY_DLL_API MY_EXTERN int asignbit(double a);

/*
Comparison macro / functions
*/

MY_DLL_API MY_EXTERN int aisgreaterf(float a, float b);
MY_DLL_API MY_EXTERN int aisgreaterequalf(float a, float b);
MY_DLL_API MY_EXTERN int aislessf(float a, float b);
MY_DLL_API MY_EXTERN int aislessequalf(float a, float b);
MY_DLL_API MY_EXTERN int aislessgreaterf(float a, float b);
MY_DLL_API MY_EXTERN int aisunorderedf(float a, float b);

MY_DLL_API MY_EXTERN int aisgreater(double a, double b);
MY_DLL_API MY_EXTERN int aisgreaterequal(double a, double b);
MY_DLL_API MY_EXTERN int aisless(double a, double b);
MY_DLL_API MY_EXTERN int aislessequal(double a, double b);
MY_DLL_API MY_EXTERN int aislessgreater(double a, double b);
MY_DLL_API MY_EXTERN int aisunordered(double a, double b);

// From String, to float or double:
// "endptr" can be NULL (0).

MY_DLL_API MY_EXTERN float astrtof(const char * str, char ** endptr);
MY_DLL_API MY_EXTERN double astrtod(const char * str, char ** endptr);

// To String, from float or double:

MY_DLL_API MY_EXTERN int asnprintfa(char * buffer, size_t sizeOfBuffer, const char * format, float a);
MY_DLL_API MY_EXTERN int asnprintfd(char * buffer, size_t sizeOfBuffer, const char * format, double a);

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

#endif /* libmyfloat_h */
