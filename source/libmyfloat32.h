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

extern float fAdd(float a, float b);
extern float fSubtract(float a, float b);
extern float fMultiply(float a, float b);
extern float fDivide(float a, float b);
extern float fNegate(float a);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* libmyfloat32_h */
