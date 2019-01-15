#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *safecat();

int main(void)
{
    char *s = malloc(8 * sizeof(char)), *ct = "Stromberg";
    strcpy(s, "Pastewka");
    if ((s = safecat(s, ct)) != NULL){
        printf("Anhaengen erfolgreich: %s\n", s);
        return 0;
    } else {
        printf("Beim Anhaengen ist ein Fehler aufgetreten.\n");
        return 1;
    }

}

char *safecat(char *s, const char *ct)
{
    if((realloc(s, (strlen(s) + strlen(ct)) * sizeof(char))) == NULL){
        return NULL;
    }
    strcat(s, ct);
    return s;
}