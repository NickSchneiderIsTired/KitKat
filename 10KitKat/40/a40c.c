#include <stdio.h>

void stringlist_rev(char *list[], int n)
{
    int i;
    char *str;
    for(i = 0; i < (n + 1) / 2; ++i) {
        str = list[i];
        list[i] = list[n - 1 - i];
        list[n - 1 - i] = str;
    }
}
