#include <stdio.h>

int main() {
	FILE *arquivo = NULL;
	arquivo = fopen("teste.txt", "w");
	
	char texto[100];
	
	fgets(texto, 100, arquivo);
	printf("%s", texto);
	
	
	fgets(texto, 100, arquivo);
	printf("%s", texto);
	
	fclose(arquivo);
	
	return 0;
}
