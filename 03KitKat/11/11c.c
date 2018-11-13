#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a, b, c;
    printf("Bitte 3 sichtbare ASCII-Zeichen eingeben:\n");
    if((scanf("%c %c %c", &a, &b, &c) == 3 && getchar() == '\n') && isupper(a)) {
        printf("Eingabe erfolgreich\nGelesene Werte: %c, %c, %c", a, b, c);
        return 0;
    } else {
        printf("Eingabe ungueltig");
        return 1;
    }
}