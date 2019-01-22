#include <math.h>

int function(int n)
{
    int t = 2;
    while (t <= sqrt(n)){
        if (n % t != 0){
            ++t;
        } else {
            return 0;
        }
    }
    return 1;
}

