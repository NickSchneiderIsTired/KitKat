#include <stdio.h>

void smult();

int main(void)
{
    int w[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    smult(w, n, 4);
    return 0;
}

void smult(int w[], int n, int x)
{
    int i;
    for (i = 0; i < n; ++i){
        w[i] *= x;
        printf("%i ", w[i]);
    }
}