#include <stdio.h>

int main(void)
{
    int a, b;
    if(scanf("%i.%i", &a, &b) == 2 && getchar() == '\n') {
        printf("Eingabe erfolgreich\nGelesene Werte: %i, %i", a, b);
        return 0;
    } else {
        printf("Eingabe ungueltig");
        return 1;
    }
}