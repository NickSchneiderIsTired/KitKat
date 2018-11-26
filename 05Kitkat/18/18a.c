#include <stdio.h>
#include <ctype.h>

void flush_buffer()
{
    while(getchar() != '\n') {}
}

int readDigit(char * c)
{
    if(scanf("%c", c) == 1 && isdigit(* c)) {
        return 1;
    } else {
        flush_buffer();
        return 0;
    }
}

int main(void)
{
    char c;
    printf("Bitte Ziffer eingeben");
    while(!readDigit(&c)) {
        printf("Eingabe nicht erfolgreich, bitte Ziffer eingeben\n");
    }
    printf("Eingabe erfolgreich, gelesene Ziffer: %c\n", c);
    return 0;
}