#include <cstdio>

int main(){
    int distancia;
    double combustivel;
    
    scanf("%d %le", &distancia, &combustivel);

    printf("%.3f km/l\n", distancia/combustivel);
    
    return 0;
}