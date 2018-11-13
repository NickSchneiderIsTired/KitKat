#include <stdio.h>

int main(void)
{
    int a;
    if((scanf("%i", &a) == 1 && getchar() == '\n') && a >= 1 && a <= 12) {
        printf("Eingabe erfolgreich\nGelesene Werte: %i", a);
        return 0;
    } else {
        printf("Eingabe ungueltig");
        return 1;
    }
}
