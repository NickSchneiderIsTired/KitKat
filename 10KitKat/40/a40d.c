void matrix_print(int *m, int ze, int sp)
{
    int i, j;
    for(i = 0; i < ze; ++i) {
        for(j = 0; j < sp; ++j) {
            printf("%i ", m[j + i * sp]);
        }
        printf("\n");
    }
}
