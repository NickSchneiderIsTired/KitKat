#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void reset_occurrences(int occurrences[])
{
    int i;
    for(i = 0; i < 10; ++i) {
        occurrences[i] = 0;
    }
}

void print_occurrences(int occurrences[])
{
    int i;
    for(i = 0; i < 10; ++i) {
        printf("%i: %i\n", i, occurrences[i]);
    }
}

void calc_occurrences(char s[], int occurrences[])
{
    int i;
    reset_occurrences(occurrences);
    for(i = 0; i < (int) strlen(s); ++i) {
        if(isdigit(s[i])) {
            ++occurrences[(s[i] - '0')];
        }
    }
    print_occurrences(occurrences);
}

int main(int argc, char* argv[])
{
    int i;
    int oc[10];
    if(argc == 1) {
        printf("ERROR");
        return -1;
    }
    for(i = 1; i < argc; ++i) {
        printf("Kommandozeilenparameter %i: %s\n", i, argv[i]);
        calc_occurrences(argv[i], oc);
    }
    return 0;
}
