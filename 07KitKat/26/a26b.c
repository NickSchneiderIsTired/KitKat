int read_array(char w[])
{
    int i;
    char c;
    for (i = 0; i < 3; ++i){
        if ((c = getchar()) != '\n' && c != EOF){
            w[i] = c;
        } else if (c == EOF){
            return EOF;
        } else {
            flush_buff();
            return 0;
        }
    }
    if ((c = getchar()) == '\n'){
        return 1;
    } else if (c == EOF){
        return EOF;
    } else {
        flush_buff();
        return 0;
    }
}