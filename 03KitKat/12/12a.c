#include <stdio.h>

void print_communication(int value, int address, int write_access)
{
    switch(write_access) {
        case 0:
            printf("Steuerwerk schreibt %i nach AM\n", address);
            printf("Steuerwerk setzt D auf %i\n", write_access);
            printf("Steuerwerk sendet A\n");
            printf("Speicherwerk liest %i von AM\n", address);
            printf("Speicherwerk sendet Wert in SZ%i\n", address);
            printf("Speicherwerk sendet T");
            break;
        case 1:
            printf("Steuerwerk schreibt %i nach AM\n", address);
            printf("Steuerwerk schreibt %i nach WM\n", value);
            printf("Steuerwerk setzt D auf %i\n", write_access);
            printf("Steuerwerk sendet A\n");
            printf("Speicherwerk liest %i von AM\n", address);
            printf("Speicherwerk liest %i von WM\n", value);
            printf("Speicherwerk ueberschreibt Inhalt in SZ%i mit %i\n", address, value);
            printf("Speicherwerk sendet A\n");
            break;
        default:
            printf("Bitte fuer write-access entweder 0 fuer lesen oder 1 fuer schreiben eingeben");
    }
}
