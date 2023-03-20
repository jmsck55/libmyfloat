// Copyright (c) 2023 James Cook

//#include <stdlib.h>
#include <stdio.h>

#include "libmycomplex.h"

int main()
{
    Complexf af, bf; //, cf, df;
    //Complex a, b, c, d;
    
    #ifdef _MSC_VER
        puts("MSVC Windows\n");
    #endif
    #ifdef __STDC__
        puts("STDC\n");
    #endif
    #ifdef __GNUC__
        puts("GNUC\n");
    #endif
    printf("Sizeof(void*) == %i\n", (int)sizeof(void*));

    if (ComplexVersion() != COMPLEX_VERSION)
    {
        printf("Error: Looking for libmycomplex.h version %i, found %i\n", (int)COMPLEX_VERSION, (int)ComplexVersion());
        return 1;
    }

    af.real = 1.0F;
    af.imag = -1.0F;

    bf.real = kcmultiplyf(&bf.imag, af.real, af.imag, af.real, af.imag);
    printf("(%f + %f * i)^2 == %f + %f * i\n", af.real, af.imag, bf.real, bf.imag);

    bf.real = kcsqrtf(&bf.imag, af.real, af.imag);
    printf("csqrtf(%f + %f * i) == %f + %f * i\n", af.real, af.imag, bf.real, bf.imag);

    puts("Press Enter to continue.\n");
    if (getc(stdin)) {}

    return 0;
}
