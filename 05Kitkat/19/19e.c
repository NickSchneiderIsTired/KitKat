#include <stdio.h>

int f();

int main(void)
{
    int w[] = {0,3,8,9,13,14,15};
    int s = 4;
    int n = 7;
    printf("%i\n", f(w, s, n));
    return 0;
}

int f(int w[], int s, int n)
{
    int li = 0;
    int re = n + 1;
    int m;
    while (li < (re - 1)){
        m = (li + re)/2;
        if (s <= w[m]){
            re = m;
        } else {
            li = m;
        }
    }
    return re;
}