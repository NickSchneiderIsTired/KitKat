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

int main()
{
    double a, error;
    error = read_interval(&a);
    if(error == 0) {
        printf("Eingabe erfolgreich, eingelesener Wert: %f", a);
    } else {
        printf("Falsche Eingabe! Bitte Zahl zwischen -2.5 und 2.5 eingeben");
    }
    return 0;
}
