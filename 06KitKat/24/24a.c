#include <ctype.h>

void calc_occurrences(char s[], int occurrences[])
{
    reset_occurrences(occurrences);
    int i;
    for(i = 0; i < (int) strlen(s); ++i) {
        if(isdigit(s[i])) {
            ++occurrences[(s[i] - '0')];
        }
    }
    print_occurrences(occurrences);
}