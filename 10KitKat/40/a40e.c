int main()
{
    int *x, *y;
    int n = 7, x;
    if((array_create(&x, n)) == 1 && (array_create(&y, n)) == 1) {
        array_init(x, n);
        array_init(y, n);
    }
    x = mult_array(x, y, n);
}
