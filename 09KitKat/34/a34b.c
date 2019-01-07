#include <stdio.h>

int read_interval();

int main(void)
{
    double x;
    printf("Bitte geben sie eine Zahl im Intervall [-2.5,2.5] ein:\n");
    while(read_interval(&x) == 1){
        printf("Die Eingabe war ungueltig, bitte geben sie eine Zahl im Intervall [-2.5,2.5] ein:\n");
    }
    printf("Ihre Eingabe war gueltig. Eingelesener Wert: %f\n", x);
    return 0;
}

int read_interval(double *p)
{
    double a;
    if (scanf("%lf", &a) == 1 && getchar() == '\n' && a <= 2.5 && a >= -2.5) {
        *p = a;
        return 0;
    } else {
        fflush(stdin);
        return 1;
    }
}
