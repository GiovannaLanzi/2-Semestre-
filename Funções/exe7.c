#include<stdio.h>
int eh_primo(int num);
int main() {
	int numero;
	scanf("%d", &numero);
	
	if(eh_primo(numero))
		printf("%d eh primo.\n", numero);
	else
		printf("%d NAO eh primo.\n", numero);
	
	return 0;
}
int eh_primo(int num) {
	int i;
	for(i = 2; i < num; i++){
		if(num % i == 0){ 
			return 0;
		}	
	}
	return 1;
}