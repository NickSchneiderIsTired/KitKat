#include <stdio.h>
#include <ctype.h>

void flush_buffer()
{
    while(getchar() != '\n') {}
}

int read_number(void)
{
    int i;
    if(scanf("%i", &i) == 1 && i > 7 && i < 41) {
        return i;
    } else {
        flush_buffer();
        return -1;
    }
}

int main(void)
{
    while(read_number() == -1) {
        printf("Bitte ganze Zahl zwischen 8 und 40 eingeben");
    }
    printf("Eingabe gueltig");
}
