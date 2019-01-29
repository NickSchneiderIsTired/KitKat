#include <stdio.h>

int main(void)
{
    ARTIKEL a;
    if (artikel_new(&a, "Bleifstift", 0.0, 0.75) == 1){
        if (artikel_set_rabatt(&a, 10.0) == 1){
            printf("Der Rabatt wurde geändert.\n");
        } else {
            printf("Der Rabatt wurde nicht geändert.\n");
        }
        artikel_print(&a);
        return 0;
    }
    printf("Der Artikel konnte nicht erstellt werden.\n");
    return 1;
}