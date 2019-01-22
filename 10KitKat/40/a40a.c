#include <stdlib.h>

int **matrix_cpy(int **m, int ze, int sp) /* sp wird nicht gebraucht wegen flacher Kopie*/
{
    int **newMatrix, i;
    newMatrix = malloc(ze * sizeof(int*));
    if(newMatrix == NULL) {
        free(newMatrix);
        return NULL;
    }
    for(i = 0; i < ze; ++i) {
        newMatrix[i] = m[i];
    }
    return newMatrix;
}