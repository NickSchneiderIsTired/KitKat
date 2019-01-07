int read_interval(double *p)
{
    double a;
    if (scanf("%lf", &a) == 1 && getchar() == '\n' && a <= 2.5 && a >= -2.5) {
        *p = a;
        return 0;
    } else {
        fflush(stdin);
        return 1;
    }
}