#include <stdio.h>

void strdel(char ct[], char c)
{
    int i;
    int n = 0;
    int j;
    while(ct[n] != '\0') {
        ++n;
    }
    for (i = 0; i < n - 1; ++i){
        if (ct[i] == c){
            for (j = i; j < n; ++j){
                ct[j] = ct[j + 1];
            }
            --i;
        }
    }
}

int main(void)
{
    char ct[] = {'H','a','l','l','o'};
    strdel(ct, 'a');
    printf("%s\n", ct);
    return 0;
}

