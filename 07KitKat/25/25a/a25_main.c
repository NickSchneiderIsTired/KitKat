#include "ctype.h"
#include <stdio.h>

int main(void)
{
    char c;
    printf("Bitte ASCII-Zeichen eingeben\n");
    if(scanf("%c", &c) == 1 && getchar() == '\n') {
        printf("isupper: %i\ntolower: %c\nisalpha: %i", isupper(c), (char)tolower(c), isalpha(c));
        return 0;
    } else {
        printf("Keine gueltige Eingabe");
        return 1;
    }
}