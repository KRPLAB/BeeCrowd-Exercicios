#include <cstdio>

int main() {
    int hr_inicio, min_inicio, hr_final, min_final;
    int hr_total, min_total;

    scanf("%d %d %d %d", &hr_inicio, &min_inicio, &hr_final, &min_final);

    int inicio = hr_inicio * 60 + min_inicio;
    int fim = hr_final * 60 + min_final;

    int duracao = fim - inicio;
    if (duracao <= 0) {
        duracao += 24 * 60;
    }

    hr_total = duracao / 60;
    min_total = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr_total, min_total);

    return 0;
}
