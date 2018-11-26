double sin(double x, int precision)
{
    double y = 1;
    int i = 1;
    for (i = 1; i < precision; i++){
        y *= 1 - (x * x)/((i * i) * (M_PI * M_PI));
    }
    printf("%f\n", y);
    printf("%f\n", x);
    return (x * y);
}