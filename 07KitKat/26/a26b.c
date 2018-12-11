int flush_buff(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return c != EOF;
}

int zeichenketteEinlesen()
{
    char c;
    int i;
    while((c = getchar()) != '\n' && c != EOF && i < MAX_LENGTH) {
        result[i++] = c;
    }
    if(c == EOF) {
        flush_buff();
        return -1;
    } else {
        flush_buff();
        return 1;
    }
}
