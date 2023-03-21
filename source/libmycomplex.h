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

#include <stddef.h>

#include "dllmacros.h"

#define COMPLEX_VERSION 3LL

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

// Library Version:

MY_DLL_API MY_EXTERN long long ComplexVersion();

// Complex Only functions:

MY_DLL_API MY_EXTERN float acargf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float aconjf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acrealf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acimagf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acprojf(float *dst, float areal, float aimag);

MY_DLL_API MY_EXTERN double acarg(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double aconj(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acreal(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acimag(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acproj(double *dst, double areal, double aimag);

// Simple arithmetic:

MY_DLL_API MY_EXTERN float acaddf(float *dst, float areal, float aimag, float breal, float bimag);
MY_DLL_API MY_EXTERN float acsubtractf(float *dst, float areal, float aimag, float breal, float bimag);
MY_DLL_API MY_EXTERN float acmultiplyf(float *dst, float areal, float aimag, float breal, float bimag);
MY_DLL_API MY_EXTERN float acdividef(float *dst, float areal, float aimag, float breal, float bimag);
MY_DLL_API MY_EXTERN float acnegatef(float *dst, float areal, float aimag);

MY_DLL_API MY_EXTERN double acadd(double *dst, double areal, double aimag, double breal, double bimag);
MY_DLL_API MY_EXTERN double acsubtract(double *dst, double areal, double aimag, double breal, double bimag);
MY_DLL_API MY_EXTERN double acmultiply(double *dst, double areal, double aimag, double breal, double bimag);
MY_DLL_API MY_EXTERN double acdivide(double *dst, double areal, double aimag, double breal, double bimag);
MY_DLL_API MY_EXTERN double acnegate(double *dst, double areal, double aimag);

// Complex functions:

MY_DLL_API MY_EXTERN float acabsf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acexpf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float aclogf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acpowf(float *dst, float areal, float aimag, float breal, float bimag);
MY_DLL_API MY_EXTERN float acsqrtf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acsinf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float accosf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float actanf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acasinf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acacosf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acatanf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acsinhf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float accoshf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float actanhf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acasinhf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acacoshf(float *dst, float areal, float aimag);
MY_DLL_API MY_EXTERN float acatanhf(float *dst, float areal, float aimag);

MY_DLL_API MY_EXTERN double acabs(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acexp(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double aclog(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acpow(double *dst, double areal, double aimag, double breal, double bimag);
MY_DLL_API MY_EXTERN double acsqrt(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acsin(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double accos(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double actan(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acasin(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acacos(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acatan(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acsinh(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double accosh(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double actanh(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acasinh(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acacosh(double *dst, double areal, double aimag);
MY_DLL_API MY_EXTERN double acatanh(double *dst, double areal, double aimag);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* libmyfloat_h */
