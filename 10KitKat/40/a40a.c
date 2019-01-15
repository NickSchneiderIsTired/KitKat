int **matrix_cpy(int **m, int ze, int sp)
{
    int **m2, i;
    if ((m2 = malloc(ze * sizeof(int))) != NULL){
        for (i = 0; i < ze; ++i){
            m2[i] = m[i];
        }
        return m2;
    }
    return NULL;

}

