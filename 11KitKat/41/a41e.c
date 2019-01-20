int func(char w[], char v[], int n, int m)
{
    int i = 1;
    while(i <= m) {
        if(w[i] != v[i]) {
            return 0;
        } else {
            ++i;
        }
    }
    return 1;
}
