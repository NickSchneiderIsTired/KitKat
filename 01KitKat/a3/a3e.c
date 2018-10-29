#include <stdio.h>
#include <math.h>

int main(int argc, char * argv[])
{
	double anzahl;
	double wurzel;
	anzahl = argc - 1;
	wurzel = sqrt(anzahl);
	printf("%.2f",wurzel);
	return 0;
}
