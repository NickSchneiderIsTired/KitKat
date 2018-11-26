int multiply(int a, int b)
{
    int x = 0;
    while (a > 0){
        x += b;
        --a;
    }
    return x;
}