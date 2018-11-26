#include <stdio.h>

void my_strncat(char s[], const char ct[], int n)
{
    int i = 0;
    while(s[i] != '\0') {
        printf("Suche \\0 %i ", i);
        ++i;
    }
    int j;
    for(j = i; j < j + n; ++j) {
        s[j] = ct[j - i];
    }
}

