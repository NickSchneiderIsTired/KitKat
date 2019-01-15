void stringlist_rev(char *list[], int n)
{
    int i;
    char *x;
    for(i = 0; i < n/2; ++i){
        x = list[i];
        list[i] = list[n-i];
        list[n-i] = x;
    }
}