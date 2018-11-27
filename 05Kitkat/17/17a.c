int multiply(int a, int b)
{
    int i, result = 0;
    for(i = 0; i < a; ++i) {
        result += b;
    }
    return result;
}