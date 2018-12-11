int isupper(int c)
{
    if(c > 64 && c < 91) {
        return 1;
    } else {
        return 0;
    }
}

int tolower(int c)
{
    if(c > 64 && c < 91) {
        return (c + 32);
    } else {
        return c;
    }
}

int isalpha(int c)
{
    if((c > 64 && c < 91) || (c > 96 && c < 123)) {
        return 1;
    } else {
        return 0;
    }
}
