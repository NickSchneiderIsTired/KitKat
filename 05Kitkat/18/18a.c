#include <stdio.h>

int read_digit();

int main(void)
{
    int x;
    printf("Bitte geben sie eine Ziffer ein:\n");
    x = read_digit();
    while (x == 0){
        printf("Die Eingabe war ungueltig, bitte geben sie eine Ziffer ein:\n");
        x = read_digit();
    }
    printf("Die Eingabe war gueltig.");
    return 0;
}

int read_digit(void)
{
    char a;
    if (scanf("%c", &a) == 1 && getchar() == '\n' && a < 58 && a > 47){
        return a;
    } else {
        fflush(stdin);
        return 0;
    }
}