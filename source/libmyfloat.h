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

#define FLOAT_VERSION 2LL

// Code for "C" library:

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

// Library Version:

MY_DLL_API MY_EXTERN int SizeOfLong();
MY_DLL_API MY_EXTERN int SizeOfLongDouble();
MY_DLL_API MY_EXTERN long long FloatVersion();

// Simple arithmetic:

MY_DLL_API MY_EXTERN float kaddf(float a, float b);
MY_DLL_API MY_EXTERN float ksubtractf(float a, float b);
MY_DLL_API MY_EXTERN float kmultiplyf(float a, float b);
MY_DLL_API MY_EXTERN float kdividef(float a, float b);
MY_DLL_API MY_EXTERN float knegatef(float a);

MY_DLL_API MY_EXTERN double kadd(double a, double b);
MY_DLL_API MY_EXTERN double ksubtract(double a, double b);
MY_DLL_API MY_EXTERN double kmultiply(double a, double b);
MY_DLL_API MY_EXTERN double kdivide(double a, double b);
MY_DLL_API MY_EXTERN double knegate(double a, double b);

// Real functions:

MY_DLL_API MY_EXTERN float kfabsf(float a);
MY_DLL_API MY_EXTERN float kexpf(float a);
MY_DLL_API MY_EXTERN float klogf(float a);
MY_DLL_API MY_EXTERN float kpowf(float a, float b);
MY_DLL_API MY_EXTERN float ksqrtf(float a);
MY_DLL_API MY_EXTERN float ksinf(float a);
MY_DLL_API MY_EXTERN float kcosf(float a);
MY_DLL_API MY_EXTERN float ktanf(float a);
MY_DLL_API MY_EXTERN float kasinf(float a);
MY_DLL_API MY_EXTERN float kacosf(float a);
MY_DLL_API MY_EXTERN float katanf(float a);
MY_DLL_API MY_EXTERN float ksinhf(float a);
MY_DLL_API MY_EXTERN float kcoshf(float a);
MY_DLL_API MY_EXTERN float ktanhf(float a);
MY_DLL_API MY_EXTERN float kasinhf(float a);
MY_DLL_API MY_EXTERN float kacoshf(float a);
MY_DLL_API MY_EXTERN float katanhf(float a);

MY_DLL_API MY_EXTERN double kfabs(double a);
MY_DLL_API MY_EXTERN double kexp(double a);
MY_DLL_API MY_EXTERN double klog(double a);
MY_DLL_API MY_EXTERN double kpow(double a, double b);
MY_DLL_API MY_EXTERN double ksqrt(double a);
MY_DLL_API MY_EXTERN double ksin(double a);
MY_DLL_API MY_EXTERN double kcos(double a);
MY_DLL_API MY_EXTERN double ktan(double a);
MY_DLL_API MY_EXTERN double kasin(double a);
MY_DLL_API MY_EXTERN double kacos(double a);
MY_DLL_API MY_EXTERN double katan(double a);
MY_DLL_API MY_EXTERN double ksinh(double a);
MY_DLL_API MY_EXTERN double kcosh(double a);
MY_DLL_API MY_EXTERN double ktanh(double a);
MY_DLL_API MY_EXTERN double kasinh(double a);
MY_DLL_API MY_EXTERN double kacosh(double a);
MY_DLL_API MY_EXTERN double katanh(double a);

// REAL Only functions:

MY_DLL_API MY_EXTERN float katan2f(float a, float b);
MY_DLL_API MY_EXTERN float kcbrtf(float a);
MY_DLL_API MY_EXTERN float kceilf(float a);
MY_DLL_API MY_EXTERN float kcopysignf(float a, float b);
MY_DLL_API MY_EXTERN float kerfj(float a);
MY_DLL_API MY_EXTERN float kerfcf(float a);
MY_DLL_API MY_EXTERN float kexp2f(float a);
MY_DLL_API MY_EXTERN float kexpm1f(float a);
MY_DLL_API MY_EXTERN float kfdimf(float a, float b);
MY_DLL_API MY_EXTERN float kfloorf(float a);
MY_DLL_API MY_EXTERN float kfmaf(float a, float b, float c);
MY_DLL_API MY_EXTERN float kfmaxf(float a, float b);
MY_DLL_API MY_EXTERN float kfminf(float a, float b);
MY_DLL_API MY_EXTERN float kfmodf(float a, float b);
MY_DLL_API MY_EXTERN float kfrexpf(float a, int *idst);
MY_DLL_API MY_EXTERN float khypotf(float a, float b);
MY_DLL_API MY_EXTERN int kilogbf(float a);
MY_DLL_API MY_EXTERN float kldexpf(float a, int i);
MY_DLL_API MY_EXTERN float klgammaf(float a);
MY_DLL_API MY_EXTERN long long kllrintf(float a);
MY_DLL_API MY_EXTERN long long kllroundf(float a);
MY_DLL_API MY_EXTERN float klog10f(float a);
MY_DLL_API MY_EXTERN float klog1pf(float a);
MY_DLL_API MY_EXTERN float klog2f(float a);
MY_DLL_API MY_EXTERN float klogbf(float a);
MY_DLL_API MY_EXTERN long klrintf(float a);
MY_DLL_API MY_EXTERN long klroundf(float a);
MY_DLL_API MY_EXTERN float knearbyintf(float a);
MY_DLL_API MY_EXTERN float knextafterf(float a, float b);
MY_DLL_API MY_EXTERN float knexttowardf(float a, long double ld);
MY_DLL_API MY_EXTERN float kremainderf(float a, float b);
MY_DLL_API MY_EXTERN float kremquof(float a, float b, int *idst);
MY_DLL_API MY_EXTERN float krintf(float a);
MY_DLL_API MY_EXTERN float kroundf(float a);
MY_DLL_API MY_EXTERN float kscalblnf(float a, long il);
MY_DLL_API MY_EXTERN float kscalbnf(float a, int i);
MY_DLL_API MY_EXTERN float ktgammaf(float a);
MY_DLL_API MY_EXTERN float ktruncf(float a);

MY_DLL_API MY_EXTERN double katan2(double a, double b);
MY_DLL_API MY_EXTERN double kcbrt(double a);
MY_DLL_API MY_EXTERN double kceil(double a);
MY_DLL_API MY_EXTERN double kcopysign(double a, double b);
MY_DLL_API MY_EXTERN double kerf(double a);
MY_DLL_API MY_EXTERN double kerfc(double a);
MY_DLL_API MY_EXTERN double kexp2(double a);
MY_DLL_API MY_EXTERN double kexpm1(double a);
MY_DLL_API MY_EXTERN double kfdim(double a, double b);
MY_DLL_API MY_EXTERN double kfloor(double a);
MY_DLL_API MY_EXTERN double kfma(double a, double b, double c);
MY_DLL_API MY_EXTERN double kfmax(double a, double b);
MY_DLL_API MY_EXTERN double kfmin(double a, double b);
MY_DLL_API MY_EXTERN double kfmod(double a, double b);
MY_DLL_API MY_EXTERN double kfrexp(double a, int *idst);
MY_DLL_API MY_EXTERN double khypot(double a, double b);
MY_DLL_API MY_EXTERN int kilogb(double a);
MY_DLL_API MY_EXTERN double kldexp(double a, int i);
MY_DLL_API MY_EXTERN double klgamma(double a);
MY_DLL_API MY_EXTERN long long kllrint(double a);
MY_DLL_API MY_EXTERN long long kllround(double a);
MY_DLL_API MY_EXTERN double klog10(double a);
MY_DLL_API MY_EXTERN double klog1p(double a);
MY_DLL_API MY_EXTERN double klog2(double a);
MY_DLL_API MY_EXTERN double klogb(double a);
MY_DLL_API MY_EXTERN long klrint(double a);
MY_DLL_API MY_EXTERN long klround(double a);
MY_DLL_API MY_EXTERN double knearbyint(double a);
MY_DLL_API MY_EXTERN double knextafter(double a, double b);
MY_DLL_API MY_EXTERN double knexttoward(double a, long double ld);
MY_DLL_API MY_EXTERN double kremainder(double a, double b);
MY_DLL_API MY_EXTERN double kremquo(double a, double b, int *idst);
MY_DLL_API MY_EXTERN double krint(double a);
MY_DLL_API MY_EXTERN double kround(double a);
MY_DLL_API MY_EXTERN double kscalbln(double a, long il);
MY_DLL_API MY_EXTERN double kscalbn(double a, int i);
MY_DLL_API MY_EXTERN double ktgamma(double a);
MY_DLL_API MY_EXTERN double ktrunc(double a);


/*
Classification macro / functions
*/

MY_DLL_API MY_EXTERN int kfpclassifyf(float a);
MY_DLL_API MY_EXTERN int kisfinitef(float a);
MY_DLL_API MY_EXTERN int kisinfj(float a);
MY_DLL_API MY_EXTERN int kisnanf(float a);
MY_DLL_API MY_EXTERN int kisnormalf(float a);
MY_DLL_API MY_EXTERN int ksignbitf(float a);

MY_DLL_API MY_EXTERN int kfpclassify(double a);
MY_DLL_API MY_EXTERN int kisfinite(double a);
MY_DLL_API MY_EXTERN int kisinf(double a);
MY_DLL_API MY_EXTERN int kisnan(double a);
MY_DLL_API MY_EXTERN int kisnormal(double a);
MY_DLL_API MY_EXTERN int ksignbit(double a);

/*
Comparison macro / functions
*/

MY_DLL_API MY_EXTERN int kisgreaterf(float a, float b);
MY_DLL_API MY_EXTERN int kisgreaterequalf(float a, float b);
MY_DLL_API MY_EXTERN int kislessf(float a, float b);
MY_DLL_API MY_EXTERN int kislessequalf(float a, float b);
MY_DLL_API MY_EXTERN int kislessgreaterf(float a, float b);
MY_DLL_API MY_EXTERN int kisunorderedf(float a, float b);

MY_DLL_API MY_EXTERN int kisgreater(double a, double b);
MY_DLL_API MY_EXTERN int kisgreaterequal(double a, double b);
MY_DLL_API MY_EXTERN int kisless(double a, double b);
MY_DLL_API MY_EXTERN int kislessequal(double a, double b);
MY_DLL_API MY_EXTERN int kislessgreater(double a, double b);
MY_DLL_API MY_EXTERN int kisunordered(double a, double b);

// From String, to float or double:
// "endptr" can be NULL (0).

MY_DLL_API MY_EXTERN float kstrtof(const char * str, char ** endptr);
MY_DLL_API MY_EXTERN double kstrtod(const char * str, char ** endptr);

// To String, from float or double:

MY_DLL_API MY_EXTERN int ksnprintfj(char * buffer, size_t sizeOfBuffer, const char * format, float a);
MY_DLL_API MY_EXTERN int ksnprintfd(char * buffer, size_t sizeOfBuffer, const char * format, double a);

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
