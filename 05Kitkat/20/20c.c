int ispalindrom(const char ct[])
{
    int length = 0;
    while(ct[length] != '\0') {
        ++length;
    }
    int i;
    for( i = 0; i < length / 2; ++i) {
        if(ct[i] != ct[length - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
