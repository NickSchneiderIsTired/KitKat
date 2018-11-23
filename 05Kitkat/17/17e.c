
#include <stdio.h>

#define M_PI 3.14159265358979323846

double sinhehe(double x, int precision)
{
    double pre_result = 1;
    int i;
    for(i = 1; i <= precision; ++i) {
        pre_result *= (1 - (x * x / (i * i * M_PI * M_PI)));
    }
    return (x * pre_result);
}


int main(void)
{
    printf("%lf", sinhehe(1.23, 5000));
}