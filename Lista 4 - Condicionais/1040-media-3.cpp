#include <cstdio>

int define_status_aluno(double nota){
    if(nota >= 7.0){
        printf("Aluno aprovado.\n");
        return 1;
    } else if(nota < 5.0) {
        printf("Aluno reprovado.\n");
        return 0;
    } else {
        printf("Aluno em exame.\n");
        return -1;
    }
}

void recuperacao_aluno(double nota) {
    if(nota >= 5.0){
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }
    
    printf("Media final: %.1f\n", nota);
    return;
}

int main(){
    double n1, n2, n3, n4;
    double media, exame;
    
    scanf("%le %le %le %le", &n1, &n2, &n3, &n4);
    
    media = ((n1*2) + (n2*3) + (n3*4) + (n4))/10;
    
    printf("Media: %.1f\n", media);
    
    if(define_status_aluno(media) < 0){
        scanf("%le", &exame);
        printf("Nota do exame: %.1f\n", exame);
        recuperacao_aluno((media+exame)/2);
    }

    return 0;
}