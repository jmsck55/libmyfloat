// Copyright (c) 2023 James Cook

//#include <stdlib.h>
#include <stdio.h>

#include "libmycomplex.h"

int main()
{
    Complexf af, bf; //, cf, df;
    //Complex a, b, c, d;
    
    af.real = 1.0F;
    af.imag = -1.0F;

    bf.imag = kcmultiplyf(&bf.real, af.real, af.imag, af.real, af.imag);
    printf("(%f + %f * i)^2 == %f + %f * i\n", af.real, af.imag, bf.real, bf.imag);

    bf.imag = kcsqrtf(&bf.real, af.real, af.imag);
    printf("csqrtf(%f + %f * i) == %f + %f * i\n", af.real, af.imag, bf.real, bf.imag);

    puts("Press Enter to continue.\n");
    if (getc(stdin)) {}

    return 0;
}
