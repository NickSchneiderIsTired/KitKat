#include <stdio.h>

int main(void)
{
    int i;
    char c;
    if(scanf("%i%c", &i, &c) == 2 && getchar() == '\n') {
        if (i < 0 && c >= 65 && c <= 90) {
            printf("Eingabe erfolgreich\nGelesene Werte: %i, %c", i, c);
            return 0;
        }
    }
    printf("Eingabe ungueltig");
    return 1;
}
