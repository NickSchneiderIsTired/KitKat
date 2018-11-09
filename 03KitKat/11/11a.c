#include <stdio.h>

int main(void)
{
    double a;
    if (scanf("%lf", &a) == 1 && getchar() == '\n'){
        printf("Die Eingabe \"%f\" war gueltig.", a);
    } else {
        printf("Die Eingabe war ungueltig.");
        return 1;
    }

    return 0;
}