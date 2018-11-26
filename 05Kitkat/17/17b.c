int calc_number_of_digits(int n)
{
    int x = 1;
    while (n / 10 != 0){
        x += 1;
        n /= 10;
    }
    return x;
}