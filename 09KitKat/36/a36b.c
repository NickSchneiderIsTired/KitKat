#include <stdio.h>
#include <string.h>

int main(void)
{
    char test1[] = "Die naechste Vorlesung ist am 7.1.2019, 10:00 Uhr, im HS 1 (Bau C)", test2[] = "Heute ist der 19.12.2018", gesucht[] = "2019";
    if (strstr(test1, gesucht)){
        printf("String 1 enthaelt \"2019\".\n");
    } else {
        printf("String 1 enthaelt \"2019\" nicht.\n");
    }
    if (strstr(test2, gesucht)){
        printf("String 2 enthaelt \"2019\".\n");
    } else {
        printf("String 2 enthaelt \"2019\" nicht.\n");
    }
    return 0;
}