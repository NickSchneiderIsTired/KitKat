#include <math.h>
#include <stdio.h>

double frexp(double x, int *exponent)
{
    int ex;
    if(x == 0) {
        *exponent = 0;
        return 0;
    }
    while(fabs(x) >= 1) {
        x = x / 2;
        ++ex;
    }
    *exponent = ex;
    if(x < 0) {
        return -x;
    } else {
        return x;
    }
}