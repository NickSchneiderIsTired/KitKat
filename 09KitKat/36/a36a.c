#include <stdio.h>
#include <string.h>

int main(void){
    char satz[] = "Die naechste Vorlesung ist am 7.1.2019, 10:00 Uhr, im HS 1 (Bau C)", trennzeichen[] = " ,()", *ptr;
    ptr = strtok(satz, trennzeichen);

    while(ptr != NULL){
        printf("%s\n", ptr);
        ptr = strtok(NULL, trennzeichen);
    }
    return 0;
}