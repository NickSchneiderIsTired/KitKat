#include <stdio.h>

int isupper(int c)
{
    if(c > 64 && c < 91) {
        return 1;
    } else {
        return 0;
    }
}

int tolower(int c)
{
    if(c > 64 && c < 91) {
        return (c + 32);
    } else {
        return c;
    }
}

int isalpha(int c)
{
    if((c > 64 && c < 91) || (c > 96 && c < 123)) {
        return 1;
    } else {
        return 0;
    }
}

int main(void)
{
    char c;
    printf("Bitte ASCII-Zeichen eingeben\n");
    if(scanf("%c", &c) == 1 && getchar() == '\n') {
        printf("isupper: %i\ntolower: %c\nisalpha %i", isupper(c), (char)tolower(c), isalpha(c));
        return 0;
    } else {
        printf("Keine gueltige Eingabe");
        return 1;
    }
}
