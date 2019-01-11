#include <stdio.h>
#include <stdlib.h>

int * cpy_array(int v[], int size)
{
    int *p;
    int i;
    p = malloc(size * sizeof(int));
    if(p == NULL) {
        free(p);
        return NULL;
    }
    for(i = 0; i < size; i++) {
        p[i] = v[i];
    }
    return p;
}

int main()
{
    int v[] = {7, 8, 9, 10};
    int *newArray = cpy_array(v, 4);
    if(newArray != NULL) {
        printf("Victory Royale! Erfolgreich kopiert! Erster Wert: %i", newArray[0]);
        return 0;
    } else {
        printf("Fehler beim kopieren");
        return 1;
    }
}
