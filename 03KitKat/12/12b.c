#include <stdio.h>

void print_communication();

int main (void)
{
    int value, adress, writeaccess;
    if (scanf("%i\n%i\n%i", &value, &adress, &writeaccess) == 3 && getchar() == '\n' && (writeaccess == 0 || writeaccess == 1)){
        print_communication(value, adress, writeaccess);
    } else {
        printf("Die Eingabe war ungueltig, das Programm wird nun beendet.\n");
        return 1;
    }
    return 0;
}

void print_communication(int value, int adress, int writeaccess)
{
    if (writeaccess == 1){
        printf("Steuerwerk schreibt %i nach AM\nSteuerwerk schreibt %i nach WM\nSteuerwerk setzt D auf Schreiben(1)\nSteuerwerk sendet A\nSpeicherwerk liest Adresse von AM(%i)\nSpeicherwerk liest Daten von WM(%i)\nSpeicherwerk ueberschreibt Inhalt der SZ%i mit %i\nSpeicherwerk sendet T", adress, value, adress, value, adress, value);
    } else {
        printf("Steuerwerk schreibt %i nach AM\nSteuerwerk setzt D auf Lesen(0)\nSteuerwerk sendet A\nSpeicherwerk liest AM\nSpeicherwerk sendet Wert nach SZ%i\nSpeicherwerk sendet T", adress, adress);
    }
}