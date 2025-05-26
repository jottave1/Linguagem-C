#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10];
    int i;

    // Lendo os 10 números positivos
    printf("Digite 10 numeros inteiros positivos:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Criando o segundo vetor com a lógica pedida
    for (i = 0; i < 10; i++) {
        if (vetor1[i] % 2 == 0) {
            vetor2[i] = vetor1[i] * 2;
        } else {
            vetor2[i] = vetor1[i] * -1;
        }
    }

    // Mostrando os dois vetores
    printf("\nVetor 1: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor 2 (par*2, impar*-1): ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor2[i]);
    }

    return 0;
}
