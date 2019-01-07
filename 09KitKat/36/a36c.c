char *strrchr(const char *cs, const int c)
{
    int n = 0, i = 0;
    char *string = NULL;
    while(*(cs + i) != '\n'){
        ++i;
        ++n;
    }
    for (i = 0; i < n; ++i){
        if(*(cs + i) == c){
            string = cs + i;
        }
    }
    return string;
}