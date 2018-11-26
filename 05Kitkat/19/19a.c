#include <stdio.h>

void print_array();

int main(void)
{
    int w[] = {1,2,3,4,5,6,7,8};
    int n = 5;
    print_array(w, n);
    return 0;
}

void print_array(int w[], int n)
{
    int i;
    if (n <= 8 && n > 0) {
        for (i = 0; i < n - 1; ++i){
            printf("%i,", w[i]);
        }
        printf("%i\n", w[n-1]);
    }
}