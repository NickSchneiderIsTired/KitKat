#include <stdio.h>
#define MAX_LENGTH 3

char result[MAX_LENGTH];

int flush_buff(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return c != EOF;
}

int zahlEinlesen()
{
    int n;
    if(scanf("%i", &n) == 1 && n > 0 && n < 13) {
        return n;
    } else {
        flush_buff();
        return -1;
    }
}

int zeichenketteEinlesen()
{
    char c;
    int i;
    while((c = getchar()) != '\n' && c != EOF && i < MAX_LENGTH) {
        result[i++] = c;
    }
    if(c == EOF) {
        flush_buff();
        return -1;
    } else {
        flush_buff();
        return 1;
    }
}

int main(void)
{
    int a, i;
    if(zeichenketteEinlesen() == -1) {
        printf("Pufferfehler!\n");
        return 1;
    }
    if((a = zahlEinlesen()) == -1) {
        printf("Ungueltige Eingabe!");
    }
    while(result[i] != '\0') {
        printf("%c, ", result[i++]);
    }
    printf("%i", a);
    return 0;
}
