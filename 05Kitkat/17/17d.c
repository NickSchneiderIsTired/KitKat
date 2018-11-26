void print_triangle(int n)
{
    int i, x;
    for (i = 0; i <= n; ++i){
        x = i;
        for (x = i; x > 0; --x){
            printf("0");
        }
        printf("\n");
    }
}