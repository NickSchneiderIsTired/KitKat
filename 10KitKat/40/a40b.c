void matrix_mult_vek(int A[][N], int x[], int b[], int n, int m)
{
    int i, j, value;
    for(i = 0; i < n; ++i) {
        for(j = 0; j < m; ++j) {
            value += A[i][j] * x[j];
        }
        b[i] = value;
        value = 0;
    }
}
