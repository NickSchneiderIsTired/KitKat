#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *safecat(char *s, const char *ct)
{
    if((realloc(s, (strlen(s) + strlen(ct)) * sizeof(char))) == NULL) {
        return NULL;
    }
    strcat(s, ct);
    return s;
}

int main()
{
    char * str1 = malloc(8 * sizeof(char));
    strcpy(str1, "Pastewka");
    char * str2 = "Stromberg";
    if((str1 = safecat(str1, str2)) != NULL) {
        printf("Victory Royale! %s", str1);
        return 0;
    } else {
        printf("Fehler beim Anhängen");
        return 1;
    }
}
