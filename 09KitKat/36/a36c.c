char *my_strrchr(const char* string, int c, int n)
{
    int i;
    char *location = NULL;
    for(i = 0; i < n; ++i) {
        if(*(string + i) == c) {
            location = string + i;
        }
    }
    return location;
}
