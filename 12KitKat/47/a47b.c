#include <stdio.h>

int main(void)
{
    ARTIKEL a;
    if((artikel_new(&a, "Bleistift", 0.0, 0.75)) == 0) {
        printf("Fehler beim erstellen des Artikels");
        return 1;
    }
    if((artikel_set_rabatt(&a, 10.0)) == 0) {
        printf("Fehler beim setzen des Rabatts");
        return 1;
    } else {
        printf("Setzen des Rabatts erfolgreich");
    }
    artikel_print(&a);
    return 0;
}
