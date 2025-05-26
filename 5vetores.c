#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5];
    int i, maior;

    // Lendo os 5 valores do primeiro vetor
    printf("Digite 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Encontrando o maior valor no vetor1
    maior = vetor1[0];
    for (i = 1; i < 5; i++) {
        if (vetor1[i] > maior) {
            maior = vetor1[i];
        }
    }

    // Preenchendo o segundo vetor com a multiplicação
    for (i = 0; i < 5; i++) {
        vetor2[i] = vetor1[i] * maior;
    }

    // Mostrando os dois vetores
    printf("\nVetor 1: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor 2 (valores multiplicados pelo maior [%d]): ", maior);
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor2[i]);
    }

    return 0;
}
