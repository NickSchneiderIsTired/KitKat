#include <stdio.h>

void print_communication();

int main (void)
{
    int value = 18, adress = 500, writeaccess = 0;
    print_communication(value, adress, writeaccess);
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