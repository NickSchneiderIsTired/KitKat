#include <stdio.h>

int read_number();

int main(void)
{
    int x;
    printf("Bitte geben sie eine Zahl zwischen 8 und 40 ein:\n");
    x = read_number();
    while (x == 0){
        printf("Die Eingabe war ungueltig, bitte geben sie eine Zahl zwischen und 40 ein:\n");
        x = read_number();
    }
    printf("Die Eingabe war gueltig.\n");
    return 0;
}

int read_number(void)
{
    int a;
    if (scanf("%i", &a) == 1 && getchar() == '\n' && a > 7 && a < 41){
        return a;
    } else {
        fflush(stdin);
        return 0;
    }
}