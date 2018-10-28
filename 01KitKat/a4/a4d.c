#include <stdio.h>
#include <stdlib.h>

int abstand(char zahl1, char zahl2)
{
	int abstand;
	abstand = abs(zahl1 - zahl2);
	return abstand;
}

int main(void)
{
	char zahl1;
	char zahl2;
	scanf("%c\n", &zahl1);
	scanf("%c", &zahl2);
	printf("%i", abstand(zahl1, zahl2));
	return 0;
}
