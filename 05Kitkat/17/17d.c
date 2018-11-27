void print_triangle(int n)
{
    int i, j;
    for(i = 0; i < n; ++i) {
        for(j = 0; j <= i; j++) {
            printf("O");
        }
        printf("\n");
    }
}