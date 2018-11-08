#include <stdio.h>

int main(void)
{
    double d;
    if(scanf("%lf", &d) == 1 && getchar() == '\n') {
        printf("Eingabe gueltig");
        return 0;
    } else {
        printf("Eingabe ungueltig");
        return 1;
    }
}
