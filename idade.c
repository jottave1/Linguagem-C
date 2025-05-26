#include <stdio.h>

int main() {
    int idade;
    int menos21 = 0;
    int mais50 = 0;

    while (1) {
        printf("Digite a idade (ou -99 para sair): ");
        scanf("%d", &idade);

        if (idade == -99) {
            break;
        }

        if (idade < 21) {
            menos21++;
        } else if (idade > 50) {
            mais50++;
        }
    }

    printf("Total de pessoas com menos de 21 anos: %d\n", menos21);
    printf("Total de pessoas com mais de 50 anos: %d\n", mais50);

    return 0;
}
