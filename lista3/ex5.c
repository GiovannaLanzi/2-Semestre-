#include <stdio.h>
//Giovanna Lanzi Lopes Torres
void exibirImpares(int n) {
	 int i;
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    exibirImpares(numero);
    
    return 0;
}