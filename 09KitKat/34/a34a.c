#include <stdio.h>

int read_interval(double *p)
{
    double x;
    if(scanf("%lf", &x) == 1 && x >= -2.5 && x <= 2.5) {
        *p = x;
        return 0;
    } else {
        fflush(stdin);
        return 1;
    }
}