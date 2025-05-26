#include <stdio.h>

int main() {
    int m, n;

    printf("Digite o tamanho da primeira sequência (m): ");
    scanf("%d", &m);

    int seq1[m];
    printf("Digite os %d números da primeira sequência:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &seq1[i]);
    }

    printf("Digite o tamanho da segunda sequência (n): ");
    scanf("%d", &n);

    int seq2[n];
    printf("Digite os %d números da segunda sequência:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &seq2[i]);
    }

    // Array para armazenar união
    int uniao[m + n];
    int tamanho = 0;

    // Adiciona todos de seq1
    for (int i = 0; i < m; i++) {
        uniao[tamanho++] = seq1[i];
    }

    // Adiciona de seq2 se ainda não existir em uniao
    for (int i = 0; i < n; i++) {
        int repetido = 0;
        for (int j = 0; j < tamanho; j++) {
            if (seq2[i] == uniao[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            uniao[tamanho++] = seq2[i];
        }
    }

    // Ordena a união com bubble sort (pode usar outro se quiser)
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (uniao[j] > uniao[j + 1]) {
                int temp = uniao[j];
                uniao[j] = uniao[j + 1];
                uniao[j + 1] = temp;
            }
        }
    }

    printf("Sequência unida e ordenada sem repetições:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", uniao[i]);
    }

    return 0;
}
