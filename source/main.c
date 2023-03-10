// Copyright (c) 2023 James Cook

//#include <stdlib.h>
#include <stdio.h>

#include "libmyfloat32.h"

int main()
{
    float a, b, c;
    
    a = 1.2;
    b = 3.4;
    
    c = Add(a, b);
    
    printf("Add() returns: %f\n", c);
    
    a = 1234;
    b = flog(a);
    c = fexp(b);

    printf("%f == %f\n", a, c);

    return 0;
}
