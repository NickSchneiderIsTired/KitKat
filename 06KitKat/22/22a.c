#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Anzahl Byte fuer char: %i\n"
           "Anzahl Byte fuer short int: %i\n"
           "Anzahl Byte fuer int: %i\n"
           "Anzahl Byte fuer long int: %i\n"
           "Anzahl Byte fuer float: %i\n"
           "Anzahl Byte fuer double: %i\n"
           "Anzahl Byte fuer den Ausdruck \"1 + 2\": %i\n"
           "Anzahl Byte fuer den Ausdruck \"1 + 2.0\": %i\n"
           "Wertebereich fuer char: [%i, %i]\n"
           "Wertebereich fuer short int: [%i, %i]\n"
           "Wertebereich fuer int: [%i, %i]\n"
           "Wertebereich fuer long int: [%lli, %lli]\n"
           "Wertebereich fuer unsigned long int: [0, %llu]\n"
           "Wertebereich fuer float:\n"
           "[-%lf, %lf]",
           sizeof(char), sizeof(short int), sizeof(int), sizeof(long int), sizeof(float), sizeof(double),
           sizeof(1 + 2), sizeof(1 + 2.0), SCHAR_MIN, SCHAR_MAX, SHRT_MIN, SHRT_MAX, INT_MIN, INT_MAX,
           LLONG_MIN, LLONG_MAX, ULLONG_MAX, FLT_MAX, FLT_MAX);
}
