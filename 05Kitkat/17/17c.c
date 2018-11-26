void print_rectangle(int lines, int columns)
{
    int i, x;
    for (i = lines; i > 0; --i){
        x = columns;
        while (x > 0){
            printf("0");
            x -= 1;
        }
        printf("\n");
    }
}