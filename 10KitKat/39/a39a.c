#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *safecpy();

int main(void)
{
    char *t = "Vogelscheuche", *s = "Feld";
    if (safecpy(t, s) != 0){
        printf("Kopierter String: %s\n", t);
    }
    printf("Test\n");
    return 0;
}

int *safecpy(char **t, char *s)
{
    char * p;
    int i = 0;
    if ((p =malloc(strlen(s) * sizeof(char))) != NULL){
        for(i = 0; *(s + i) != '\0'; ++i) {
            p[i] = s[i];
        }
        p[i] = '\0';
        *t = p;

        /*while(*(s + i) != '\n'){
            p[i] = s[i];
            ++i;
        }
        *t = p;*/
        return 1;
    }
    free(p);
    return 0;

}