#include <stdio.h>

double umrechnung(int megabyte)
{
	double mebibyte;
	mebibyte = megabyte / 1.049;
	return mebibyte;
}

int main(void)
{
	double megabyte;
	scanf("%lf", &megabyte);
	printf("%f", umrechnung(megabyte));
	return 0;
}