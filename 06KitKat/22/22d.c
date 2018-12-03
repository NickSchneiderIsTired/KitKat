#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random()
{
    int a = rand() % 3;
    switch (a) {
        case 0 : return 48 + (rand() % 10);
        case 1 : return 65 + (rand() % 26);
        case 2 : return 97 + (rand() % 26);
        default : return -1;
    }
}

int main(void)
{
    srand(time(NULL));
    printf("%c", random());
}
