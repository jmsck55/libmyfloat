// Copyright (c) 2023 James Cook

//#include <stdlib.h>
#include <stdio.h>

#include "libmyfloat.h"

int main()
{
    float a, b, c;
    
    a = 1.2;
    b = 3.4;
    
    c = kaddf(a, b);
    
    printf("kaddf() returns: %f\n", c);
    
    a = 1234;
    b = klogf(a);
    c = kexpf(b);

    printf("%f == %f\n", (double)a, (double)c);
    puts("Press Enter to continue.\n");
    if (getc(stdin));

    return 0;
}
