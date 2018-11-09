#include <stdio.h>

int main(void)
{
    int a, b;
    if (scanf("%i.%i", &a, &b) == 2 && getchar() == '\n'){
        printf("Die Eingabe \"%i.%i\" war gueltig.", a, b);
    } else {
        printf("Die Eingabe war ungueltig.");
        return 1;
    }
    return 0;
}