#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    char *p;
    double value;
    scanf("%s", str);
    value = strtod(str, &p);
    printf("%f, %s", value, p);
    return 0;
}
