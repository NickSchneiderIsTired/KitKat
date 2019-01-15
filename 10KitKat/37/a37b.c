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
    char * str2 = "Stromberg";
    strcpy(str1, "Pastewka");
    if((str1 = safecat(str1, str2)) != NULL) {
        printf("Anhaengen erfolgreich: %s\n", str1);
        free(str1);
        return 0;
    } else {
        printf("Fehler beim Anhaengen");
        return 1;
    }
}
