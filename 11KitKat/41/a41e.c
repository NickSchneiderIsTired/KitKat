int func(char w[], char v[], int n, int m)
{
    int i = 1;
    for (i = 1; i <= m; ++i){
        if (w[i - 1] != v[i - 1]){
            return 0;
        }
    }
    return 1;
}
