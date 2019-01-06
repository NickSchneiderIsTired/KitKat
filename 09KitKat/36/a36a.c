#include <stdio.h>
#include <string.h>

void seperater(char *ptr)
{
    const char delim[]= " ,()";
    ptr = strtok(ptr, delim);

    while(ptr!=NULL) {
        printf("%s\n",ptr);
        ptr = strtok(NULL, delim);
    }

}


int main()
{
    char ptr[]="Die naechste Vorlesung ist am 7.1.2019, 10:00 Uhr, im HS 1 (Bau C)";
    seperater(ptr);
    return 0;
}
