void my_strcpy(char s[], const char ct[]) /* unsafe method */
{
    int i = 0;
    while(ct[i] != '\0') {
        s[i] = ct[i];
        ++i;
    }
}