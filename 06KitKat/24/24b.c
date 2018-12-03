#include <stdio.h>


void calc_occurrences();
void print_occurrences();
void reset_occurrences();

int main(int argc, const char * argv[])
{
    int occurrences[10];
    int i;
    for (i = 1; i < argc; ++i){
        calc_occurrences(argv[i], occurrences);
        printf("Kommandozeilenparameter %i: %s\n", i, argv[i]);
        print_occurrences(occurrences);
    }
    return 0;
}

void calc_occurrences(char s[], int occurrences[])
{
    int length = 0;
    int i = 0;
    reset_occurrences(occurrences);
    while(s[i] != '\0'){
        ++length;
        ++i;
    }
    for (i = 0; i < length; ++i){
        if (s[i] == '0'){
            ++occurrences[0];
        } else if (s[i] == '1'){
            ++occurrences[1];
        } else if (s[i] == '2'){
            ++occurrences[2];
        } else if (s[i] == '3'){
            ++occurrences[3];
        } else if (s[i] == '4'){
            ++occurrences[4];
        } else if (s[i] == '5'){
            ++occurrences[5];
        } else if (s[i] == '6'){
            ++occurrences[6];
        } else if (s[i] == '7'){
            ++occurrences[7];
        } else if (s[i] == '8'){
            ++occurrences[8];
        } else if (s[i] == '9'){
            ++occurrences[9];
        }
    }
}

void reset_occurrences(int occurrences[])
{
    int i;
    for (i = 0; i < 10; ++i){
        occurrences[i] = 0;
    }
}

void print_occurrences(int occurrences[])
{
    int i;
    for (i = 0; i < 10; ++i){
        printf("%i: %i\n", i, occurrences[i]);
    }
}