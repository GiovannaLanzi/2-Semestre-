#include <stdio.h>
int soma(int a, int b); //assinatura da função

int main(){
	int a=10, b=10;
	//printf("Digite dois números:\n");
	//scanf("%d %d", &a, &b);
	
	printf("a = %d, b = %d", a, b);
	
	printf("\nSoma = %d", soma(a, b));
	
	printf("\na = %d, b = %d", a, b);
	return 0;
}

int soma(int a, int b) {
	a++;
	b++;
	return a+b;
}
