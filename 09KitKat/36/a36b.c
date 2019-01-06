#include <stdio.h>
#include <string.h>

int main()
{
    char *string = "Die naechste Vorlesung ist am 7.1.2019, 10:00 Uhr, im HS 1 (Bau C)";
    char *needle = "2019";

    if(strstr(string, needle) != NULL) {
        printf("2019 gefunden");
    } else {
        printf("2019 nicht gefunden");
    }
    return 0;
}