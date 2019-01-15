#include <stdio.h>
#include <math.h>

int my_frexp(double x, int *exp){
    exp = 0
    if(x == 0){
        *exp = 0;
        return 0;
    }
    while (fabs(x) >= 1){
        x /= 2.0;
        ++(*exp);
    }
    *exp = a;
    if (x > 0){
        return x;
    } else {
        return -x;
    }

}

int main ()
{
    double param, result;
    int n;
    param = 8.0;
    result = my_frexp(param , &n);
    printf ("%f = %f * 2^%d\n", param, result, n);
    return 0;
}

