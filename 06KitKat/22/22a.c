#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Anzahl byte fuer char: %i\n", sizeof(char));
    printf("Anzahl byte fuer short int: %i\n", sizeof(short int));
    printf("Anzahl byte fuer int: %i\n", sizeof(int));
    printf("Anzahl byte fuer long int: %i\n", sizeof(long int));
    printf("Anzahl byte fuer float: %i\n", sizeof(float));
    printf("Anzahl byte fuer double: %i\n", sizeof(double));
    printf("Anzahl byte fuer den Ausdruck \"1 + 2\": %i\n", sizeof(1 + 2));
    printf("Anzahl byte fuer den Ausdruck \"1 + 2.0\": %i\n", sizeof(1 + 2.0));
    printf("Wertebereich fuer char: [%i, %i]\n", SCHAR_MIN, SCHAR_MAX);
    printf("Wertebereich fuer short int: [%i, %i]\n", SHRT_MIN, SHRT_MAX);
    printf("Wertebereich fuer int: [%i, %i]\n", INT_MIN, INT_MAX);
    printf("Wertebereich fuer long int: [%I64u, %I64u]\n", LLONG_MIN, LLONG_MAX);
    printf("Wertebereich fuer unsigned long int: [0, %I64u]\n", ULLONG_MAX);
    printf("Wertebereich fuer float: [-%f, %f]\n", FLT_MAX, FLT_MAX);
    return 0;
}