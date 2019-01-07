char *my_strpbrk(const char *str1, const char *str2)
{
    int i, j;
    for(i = 0; *(str1 + i) != '\0'; ++i) {
        for(j = 0; *(str2 + j) != '\0'; ++j) {
            if(*(str1 + i) == *(str2 + j)) {
                return str1 + i;
            }
        }
    }
    return NULL;
}