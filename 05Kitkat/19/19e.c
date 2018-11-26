int algorithm(int values[], int s)
{
    int li = 0;
    int re = sizeof(values) / sizeof(int) + 1;
    while(li < re - 1) {
        int m = (li + re) / 2;
        if(s <= values[m]) {
            re = m;
        } else {
            li = m;
        }
    }
    return re;
}
