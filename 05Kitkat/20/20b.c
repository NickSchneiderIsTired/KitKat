#include <stdio.h>

void my_strncat();

int main(void)
{
    const char ct[] = {'a', 'b', 'c'};
    char s[] = {'x', 'y', 'z'};
    int n = 3;
    my_strncat(s, ct, n);
    return 0;
}

void my_strncat(char s[], const char ct[], int n)
{
    int i;
    for (i = 0; i < n; ++i){
        s[n + i] = ct[i];
    }
}