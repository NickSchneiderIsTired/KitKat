int main(void)
{
    int *x, *y;
    if (array_create(&x, 7) == 1){
        array_init(x, 7);
    } else {
        array_destroy(x);
    }

    if (array_create(&y, 7) == 1){
        array_init(y, 7);
    } else {
        array_destroy(y);
    }
    printf("%i\n", mult_array(x, y, 7));

    return 0;
}