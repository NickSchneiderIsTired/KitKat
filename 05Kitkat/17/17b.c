#include <Math.h>
#include <stdio.h>

int calc_number_of_digits(int n)
{
    return log10(n)+ 1;
}

int main(void)
{
    printf("%i", calc_number_of_digits(6));
    return 0;
}