#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a[10], *p;
    double d;
    scanf("%s", a);
    d = strtod(a, &p);
    printf("%s, %f\n", a, d);
    return 0;
}