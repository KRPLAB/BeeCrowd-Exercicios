#include <cstdio>
#include <cmath>

int main(){
    int tempo, velocidade;
    
    
    scanf("%d %d", &tempo, &velocidade);

    printf("%.3f\n", (tempo*velocidade)/12.0);
    
    return 0;
}