#include <stdio.h>

int main(){
	
	int valores[20];
	int i;
	
	printf	("Digite 20 valores inteiros\n");
	
	for(i = 0; i < 20; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        
    }
    
    printf("\nResultados:\n");
    for(i = 0; i < 20; i++) {
        if (valores[i] > 0) {
            printf("Valor: %d, Resultado: %d\n", valores[i], valores[i] * 2);
        } 
		
		else {
            int positivo = (valores[i] < 0) ? -valores[i] : valores[i];
            printf("Valor: %d, Resultado: %d\n", valores[i], positivo);
        }
    }
    return 0;
	
}