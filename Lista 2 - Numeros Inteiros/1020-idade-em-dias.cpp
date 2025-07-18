#include <cstdio>

int main()
{
    
    int dias_total;
    int anos, meses, dias;
    
    scanf("%d", &dias_total);
    anos = dias_total/365;
    
    meses = (dias_total%365)/30;

    dias = (dias_total%365)%30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}