#include <cstdio>

int main(){
    int hr_inicio, hr_final;
    
    scanf("%d %d", &hr_inicio, &hr_final);
    if(hr_final > hr_inicio){
        printf("O JOGO DUROU %d HORA(S)\n", (hr_final-hr_inicio));
    } else {
        if(hr_inicio == hr_final){
            printf("O JOGO DUROU 24 HORA(S)\n");
        } else {
            printf("O JOGO DUROU %d HORA(S)\n", ((24-hr_inicio)+hr_final));
        }
    }

    return 0;
}