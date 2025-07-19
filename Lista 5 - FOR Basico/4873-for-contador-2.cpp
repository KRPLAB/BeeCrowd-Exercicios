#include <cstdio>

int main()
{
    int n;
    int contador = 0;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int valor;
        scanf("%d", &valor);
        if(valor%2 == 0)
            contador++;
    }
    
    printf("%d\n", contador);
    return 0;
}