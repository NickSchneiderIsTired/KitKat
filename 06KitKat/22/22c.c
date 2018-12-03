#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int wuerfel();

int main(void)
{
    srand(time(NULL));
    printf("%i", wuerfel());
    return 0;
}

int wuerfel(void)
{
    return (1 + rand() % 6);