#include <stdio.h>

int main(int argc, char * argv[])
{
	int anzahl;
	anzahl = printf("%s\n",argv[1])-1;
	printf("%i",anzahl);
	return 0;
}