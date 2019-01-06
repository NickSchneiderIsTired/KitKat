#include <stdio.h>

char *my_strpbrk(const char *str1, const char *str2, int m, int n)
{
    int i, j;
    for(i = 0; i < m; ++i) {
        for(j = 0; j < n; ++j) {
            if(*(str1 + i) == *(str2 + j)) {
                return str1 + i;
            }
        }
    }
    return NULL;
}

/*char *my_strpbrk2(const char *str1, const char *str2)
{
    int i = 0, j = 0;
    while(*(str1 + i) != '\0') {
        while(*(str2 + j) != '\0') {
            if(*(str1 + i) == *(str2 + j)) {
                return str1 + i;
            }
            j++;
            printf("j: %i\n", j);
        }
        i++;
        printf("i: %i\n", i);
    }
    return NULL;
}*/

int main()
{
    char *p = my_strpbrk("ello there", "wasght", 10, 6);
    printf("%c", *p);
    return 0;
}