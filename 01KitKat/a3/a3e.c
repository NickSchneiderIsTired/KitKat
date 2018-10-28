#include <stdio.h>
#include <math.h>

int main(int argc, char * argv[])
{
	double anzahl;
	double wurzel;
	double wurzel_gerundet;
	anzahl = argc-1;
	wurzel = sqrt(anzahl);
	wurzel_gerundet = (double)(wurzel*100+0.5)/100;
	printf("%.2f",wurzel_gerundet);
	return 0;
}