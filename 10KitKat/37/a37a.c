#include <stdio.h>
#include <stdlib.h>

int *cpy_array();

int main(void)
{
    int v[] = {7, 8, 9, 10};
    int *copy = cpy_array(v, 4);

    if (copy == NULL){
        printf("Beim Kopieren ist ein Fehler aufgetreten.\n");
        return 1;
    } else {
        printf("Kopieren erfolgreich.\nAnfang der Kopie: %i", copy[0]);
        return 0;
    }
}

int *cpy_array(int v[], int size)
{
    int *p, i;

    p = malloc(size * sizeof(int));

    if (p == NULL) {
        free(p);
        return NULL;
    }

    for (i = 0; i < size; ++i) {
        p[i] = v[i];
    }
    return p;

}