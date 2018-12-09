#include <stdio.h>

int read_array();

int main(void)
{
    char w[3];
    int a = read_array(w);

    if (a == 1){
        printf("%s\n", w);
        return 0;
    } else if (a == 0){
        printf("Ungueltige Eingabe!\n");
        return 2;
    } else {
        printf("Pufferfehler!\n");
        return 1;
    }
}

int read_array(char w[])
{
    int i;
    char c;
    for (i = 0; i < 3; ++i){
        if ((c = getchar()) != '\n' && c != EOF){
            w[i] = c;
        } else if (c == EOF){
            return EOF;
        } else {
            return 0;
        }
    }
    if ((c = getchar()) == '\n'){
        return 1;
    } else if (c == EOF){
        return EOF;
    } else {
        return 0;
    }
}