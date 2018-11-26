#include <stdio.h>

void strdel(char ct[], char c)
{
    int length;
    while(ct[length] != '\0') {
        ++length;
    }
    int positions[length + 1];
    int i, j;
    for(i = 0; i < length; ++i) {
        if(ct[i] == c) {
            for(j = i; j < length - 1; ++j) {
                ct[j] = ct[j + i];
            }
            --length;
        }
    }
}

int main()
{
    char chars[] = "Hello";
    strdel(chars, 'l');
    printf("%s", chars);
    return 0;
}