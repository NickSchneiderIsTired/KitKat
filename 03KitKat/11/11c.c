#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a, b, c;
    if (scanf("%c%c%c", &a, &b, &c) == 3 && isupper(a) == 1 && getchar() == '\n'){
        printf("Die Eingabe \"%c%c%c\" war gueltig.", a, b, c);
    } else {
        printf("Die Eingabe war ungueltig.");
        return 1;
    }
    return 0;
}