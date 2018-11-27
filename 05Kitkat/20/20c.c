#include <stdio.h>

int ispalindrom();

int main(void)
{
    const char ct[] = {'A','B','B','A'};
    printf("%i\n", ispalindrom(ct));
    return 0;
}

int ispalindrom(const char ct[])
{
    int n = 0;
    int i = 0;
    while(ct[n] != '\0') {
        ++n;
    }
    n -= 2;
    while (i < n){
        if (ct[i] != ct[n]){
            return 1;
        }
        ++i;
        --n;
    }
    return 0;
}