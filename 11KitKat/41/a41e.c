int func(char w[], char v[], int n, int m)
{
    int i = 1;
    while(i <= m) {
        if(w[i - 1] != v[i - 1]) {
            return 0;
        } else {
            ++i;
        }
    }
    return 1;
}
