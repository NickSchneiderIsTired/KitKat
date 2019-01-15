#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int safecpy(char **t, char *s)
{
    char *p;
    int i;
    if((p = malloc(strlen(s))) == NULL) {
        free(p);
        return 0;
    }
    for(i = 0; *(s + i) != '\0'; ++i) {
        p[i] = s[i];
    }
    p[i] = '\0';
    *t = p;
    return 1;
}