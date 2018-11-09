#include <stdio.h>

int main(void)
{
    int a;
    if (scanf("%i", &a) == 1 && getchar() == '\n' && a > 0 && a < 13){
        printf("Die Eingabe \"%i\" war gueltig.", a);
    } else {
        printf("Die Eingabe war ungueltig.");
        return 1;
    }
    return 0;
}