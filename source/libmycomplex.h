// Copyright (c) 2023 James Cook
//
//  libmycomplex.h
//  libmycomplex
//
//  Created by James Cook on 3/6/23.
//
//  Header file for libmycomplex.c
//

#ifndef libmycomplex_h
#define libmycomplex_h

#include "dllmacros.h"

// Useful typedef's:

typedef struct {
	float real;
	float imag;
} Complexf;

typedef struct {
	double real;
	double imag;
} Complex;

// Code for "C" library:

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


// Complex Only functions:

MY_DLL_API MY_EXTERN float kcargf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kconjf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcrealf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcimagf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcprojf(float *dst, float areal, float aimag);

MY_DLL_API MY_EXTERN double kcarg(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kconj(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcreal(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcimag(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcproj(double *dst, double areal, double aimag);

// Simple arithmetic:

MY_DLL_API MY_EXTERN float kcaddf(float *dst, float areal, float aimag, float breal, float bimag);
MY_DLL_API MY_EXTERN float kcsubtractf(float *dst, float areal, float aimag, float breal, float bimag);
MY_DLL_API MY_EXTERN float kcmultiplyf(float *dst, float areal, float aimag, float breal, float bimag);
MY_DLL_API MY_EXTERN float kcdividef(float *dst, float areal, float aimag, float breal, float bimag);
MY_DLL_API MY_EXTERN float kcnegatef(float *dst, float areal, float aimag, float breal, float bimag);

MY_DLL_API MY_EXTERN double kcadd(double *dst, double areal, double aimag, double breal, double bimag);
MY_DLL_API MY_EXTERN double kcsubtract(double *dst, double areal, double aimag, double breal, double bimag);
MY_DLL_API MY_EXTERN double kcmultiply(double *dst, double areal, double aimag, double breal, double bimag);
MY_DLL_API MY_EXTERN double kcdivide(double *dst, double areal, double aimag, double breal, double bimag);
MY_DLL_API MY_EXTERN double kcnegate(double *dst, double areal, double aimag, double breal, double bimag);

// Complex functions:

MY_DLL_API MY_EXTERN float kcabsf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcexpf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kclogf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcpowf(float *dst, float areal, float aimag, float breal, float bimag);
MY_DLL_API MY_EXTERN float kcsqrtf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcsinf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kccosf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kctanf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcasinf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcacosf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcatanf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcsinhf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kccoshf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kctanhf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcasinhf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcacoshf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float kcatanhf(float *dst, float areal, float aimag);

MY_DLL_API MY_EXTERN double kcabs(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcexp(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kclog(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcpow(double *dst, double areal, double aimag, double breal, double bimag);
MY_DLL_API MY_EXTERN double kcsqrt(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcsin(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kccos(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kctan(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcasin(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcacos(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcatan(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcsinh(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kccosh(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kctanh(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcasinh(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcacosh(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double kcatanh(double *dst, double areal, double aimag);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* libmyfloat_h */
