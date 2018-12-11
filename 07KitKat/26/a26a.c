int flush_buff(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return c != EOF;
}

int zahlEinlesen()
{
    int n;
    if(scanf("%i", &n) == 1 && n > 0 && n < 13) {
        return n;
    } else {
        flush_buff();
        return -1;
    }
}