char *strpbrk(const char *cs, const char *ct)
{
    int n = 0, i = 0, j = 0, m = 0;
    char *position = NULL;

    while(*(cs + i) != '\n'){
        ++i;
        ++n;
    }
    while(*(ct + j) != '\n'){
        ++j;
        ++m;
    }

    for (i = 0; i < n; ++i){
        for (j = 0; j < m; ++j){
            if (*(cs + i) == *(ct + j)){
                position = cs + i;
                return position;
            }
        }
    }
    return position;
}