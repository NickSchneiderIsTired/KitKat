#include <stdio.h>

void my_strcpy();

int main(void)
{
    const char ct[] = {'a', 'b', 'c'};
    char s[] = {'x', 'y', 'z'};
    my_strcpy(s, ct);
    return 0;
}

void my_strcpy(char s[], const char ct[])
{
    int n = 0;
    int i;
    while(s[n] != '\0') {
        ++n;
    }
    for (i = 0; i < n; ++i){
        s[i] = ct[i];
    }
}