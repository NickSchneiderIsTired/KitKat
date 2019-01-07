char *my_strrchr(const char* string, int c)
{
    int i;
    char *location = NULL;
    for(i = 0; *(string + i) != '\0'; ++i) {
        if(*(string + i) == c) {
            location = string + i;
        }
    }
    return location;
}
