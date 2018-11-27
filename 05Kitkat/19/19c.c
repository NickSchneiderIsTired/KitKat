void smult(int w[], int n, int x)
{
    int i;
    for (i = 0; i < n; ++i){
        w[i] *= x;
        printf("%i ", w[i]);
    }
}