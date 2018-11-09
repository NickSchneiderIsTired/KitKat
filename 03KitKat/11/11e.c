#include <stdio.h>

int main(void)
{
    int a;
    char x;
    if (scanf("%i%c", &a, &x) == 2 && getchar() == '\n' && a < 0 && x < 91 && x > 64){
        printf("Die Eingabe \"%i%c\" war gueltig.", a, x);
    } else {
        printf("Die Eingabe war ungueltig.\n");
        return 1;
    }
    return 0;
}