int read_digit()
{
    int a, c;
    if (scanf("%i", &a) == 1 && a > 0 && a < 13 && (c = getchar()) == '\n'){
        return a;
    } else if (c == EOF){
        return EOF;
    } else {
        flush_buff();
        return 0;
    }
}