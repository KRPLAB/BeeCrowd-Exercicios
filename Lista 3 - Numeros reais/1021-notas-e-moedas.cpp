#include <cstdio>
#include <cmath>

int main(){
    double notas[12] = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};
    double valor;
    
    scanf("%le", &valor);

    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++){            
        printf("%.f nota(s) de R$ %.2f\n", floor(valor/notas[i]), notas[i]);
        valor = fmod(valor,(notas[i]));
    }
    printf("MOEDAS:\n");
    for(int i = 6; i < 12; i++){            
        printf("%.f moeda(s) de R$ %.2f\n", floor((valor/notas[i])+1e-9), notas[i]);
        valor = fmod(valor,(notas[i]));
    }
    
    return 0;
}