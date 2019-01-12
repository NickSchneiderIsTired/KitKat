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

int main () {
    double x = 1024, fraction;
    int e;

    fraction = frexp(x, &e);
    printf("x = %.2f = %.2f * 2^%d\n", x, fraction, e);

    return 0;
}
