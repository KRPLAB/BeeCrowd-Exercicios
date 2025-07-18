#include <cstdio>

int main()
{
    
    int seg_total;
    int hora, min, seg_rest;
    
    scanf("%d", &seg_total);
    hora = seg_total/3600;
    
    min = (seg_total%3600)/60;

    seg_rest = seg_total%60;
    
    printf("%d:%d:%d\n", hora, min, seg_rest);

    return 0;
}