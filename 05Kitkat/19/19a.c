void print_array(int w[], int n)
{
    int i;
    for(i = 0; i < n; ++i) {
        if(i == n - 1) {
            printf("%i", w[i]);
        } else {
            printf("%i, ", w[i]);
        }
    }
}
