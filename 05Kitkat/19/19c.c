#include <stdio.h>

void smult(int w[], int n, int x)
{
    int i;
    for(i = 0; i < n; ++i) {
        w[i] = w[i] * x;
        printf("%i, ", w[i]);
    }
}

int main(void)
{
    int values[] = {2, 3, 4, 5};
    smult(values, 4, 2);
}
