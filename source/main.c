// Copyright (c) 2023 James Cook

//#include <stdlib.h>
#include <stdio.h>

#include "libmyfloat32.h"

int main()
{
    float a, b, c;
    
    a = 1.2;
    b = 3.4;
    
    c = fAdd(a, b);
    
    printf("fAdd() returns: %f\n", c);
    
    return 0;
}
