#include <stdio.h>

void strdel(char ct[], char c)
{
    int length;
    while(ct[length] != '\0') {
        ++length;
    }
    int i;
    int j;
    for(i = 0; i < length; ++i) {
        if(ct[i] == c) {{
            if(i == length - 1) {
                ct[i] = '\0';
            } else {
                for(j = i; j < length - 1; ++j) {
                    ct[j] = ct[j + i];
                }

                --length;
            }
        }
    }
}

int main()
{
    char chars[] = "HHHeelloo";
    strdel(chars, 'H');
    printf("%s", chars);
    return 0;
}