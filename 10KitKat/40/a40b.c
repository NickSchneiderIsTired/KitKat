void matrix_mult_vek(int A[][N], int x[], int b[], int n, int m)
{
    int i, j;
    for (i = 0; i < n; ++i){
        b[i] = 0;
        for (j = 0; j < m; ++j){
            b[i] += A[i][j] * x[j]
        }
    }
}