int flush_buff(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return c != EOF;
}

int zahlEinlesen()
{
    int n, a;
    if(a = scanf("%i", &n) == 1 && n > 0 && n < 13) {
        return n;
    } else if(a == EOF){
        return EOF;
    } else {
        flush_buff();
        return -1;
    }
}