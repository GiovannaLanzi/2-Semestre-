#include <stdio.h>

int main (){
	FILE *arquivo = NULL;
	arquivo = fopen("teste.txt", "r");
	
	char texto[100];
	fscanf(arquivo, "%s", texto);
	printf("%s", texto);
	
	fclose(arquivo);
	arquivo = fopen("teste.txt", "a");
	
	fprintf(arquivo, "ola ola\n");
	
	fclose(arquivo);
	
	return 0;
	
}
