#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int muenzwurf();

int main(void)
{
    srand(time(NULL));
    printf("%i", muenzwurf());
    return 0;
}

int muenzwurf(void)
{
    return (rand() % 2);
}