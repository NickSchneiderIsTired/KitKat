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

int main(void)
{
    int value, address, wa;
    printf("Bitte Wert, Addresse und write-access mit Leerzeichen getrennt eingeben...\n");
    if(scanf("%i %i %i", &value, &address, &wa) == 3 && getchar() == '\n') {
        if(address > 0) {
            print_communication(value, address, wa);
            return 0;
        } else {
            printf("Bitte positive ganze Zahl als Addresse angeben");
            return 1;
        }
    } else {
        printf("Ungueltige Eingabe");
        return 1;
    }
}
