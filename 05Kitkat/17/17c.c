#include <stdio.h>

void print_rectangle(int lines, int cols)
{
    int i, j;
    for(i = 0; i < lines; ++i) {
        for(int j = 0; j < cols; j++) {
            printf("O");
        }
        printf("\n");
    }
}

int main(void)
{
    print_rectangle(4, 2);
}
