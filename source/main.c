// Copyright (c) 2023 James Cook

//#include <stdlib.h>
#include <stdio.h>

#include "libmyfloat.h"

int main()
{
    float a, b, c;
    
    printf("Float Library Version: %i\n", (int)FloatVersion());
    puts("System:\n");
    #ifdef _MSC_VER
        puts("MSVC Windows ");
    #endif
    #ifdef __aarch64__
        puts("aarch64 ");
    #endif
    #ifdef __STDC__
        puts("STDC ");
    #endif
    #ifdef __GNUC__
        puts("GNUC ");
    #endif
    printf("Sizeof(void*) == %i, float==%i, double==%i, int==%i, long==%i, long double==%i\n", (int)sizeof(void*), (int)sizeof(float), (int)sizeof(double), (int)sizeof(int), (int)sizeof(long), (int)sizeof(long double));
    printf("Library long==%i, long double==%i\n\n", (int)SizeOfLong(), (int)SizeOfLongDouble());
    if (FloatVersion() != FLOAT_VERSION)
    {
        printf("Error: Looking for libmyfloat.h version %i, found %i\n", (int)FLOAT_VERSION, (int)FloatVersion());
        return 1;
    }

    a = 1.2;
    b = 3.4;
    
    c = aaddf(a, b);
    
    printf("aaddf() returns: %f\n", c);
    
    a = 1234;
    b = alogf(a);
    c = aexpf(b);

    printf("%f == %f\n", (double)a, (double)c);
    puts("Press Enter to continue.\n");
    if (getc(stdin)) {}

    return 0;
}
