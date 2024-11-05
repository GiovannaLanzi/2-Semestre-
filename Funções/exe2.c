#include <stdio.h>
int soma(int a, int b); //assinatura da função

int main(){
	int numero1, numero2;
	printf("Digite dois números:\n");
	scanf("%d %d", &numero1, &numero2);
	
	printf("Soma = %d", soma(numero1, numero2));
	
	return 0;
}

int soma(int a, int b) {
	return a + b;
}
