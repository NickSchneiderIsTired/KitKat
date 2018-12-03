#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LENGTH 20
#define MIN_LENGTH 2

int read_name(char input[])
{
    int i = 0;
    char chars[MAX_LENGTH];
    scanf("%s", chars);
    while(chars[i] != '\0') {
        if(isupper(chars[0]) && isalpha(chars[i])) {
            ++i;
        } else {
            return 0;
        }
    }
    if(!(i >= MIN_LENGTH && i <= MAX_LENGTH)) {
        return 0;
    }
    strcpy(input, chars);
    return 1;
}

int main(void)
{
    char input[20];
    printf("%i", read_name(input));
    return 0;
}
