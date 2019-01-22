int isPrefix(char w[], char v, int n, int m)
{
    int i;
    for (i = 1; i <= m; ++i){
        if (w[i] != v [i])		{
            return 0;
        }
    }
    return 1;
}