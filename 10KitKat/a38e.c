#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *orakel(void);

int main(void)
{
    char *s;
    s = orakel();
    if (s == NULL) {
        printf("main: Speicherfehler in orakel");
        return 1;
    }
    printf("%s", s);
    free(s);
    return 0;
}

char *orakel(void)
{
    char *s, *t;
    s = malloc(9 * sizeof(char));
    t = malloc(7 * sizeof(char));
    if (s == NULL) {
        free(s);
        return NULL;
    }
    if (t == NULL) {
        free(t);
        return NULL;
    }
    strcpy(s, "Six Feet");
    strcpy(t, " Under");
    strcat(s, t);
    free(t);
    return s;
}