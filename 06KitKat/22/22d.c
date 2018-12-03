#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char zufallsZeichen();

int main(void)
{
    srand(time(NULL));
    printf("%c", zufallsZeichen());
    return 0;
}

char zufallsZeichen(void)
{
    int x = rand() % 3;
    if (x == 0){
        return (48 + rand() % 10);
    } else if (x == 1) {
        return (65 + rand() % 26);
    } else {
        return (97 + rand() % 26);
    }
}