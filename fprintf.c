#include <stdio.h>

int main() {
	FILE *arquivo = NULL;
	arquivo = fopen("teste.txt", "w");
	
	fprintf(arquivo, "Inicio do arquivo\n");
	int n = 507;
	fprintf(arquivo, "Valor de n = %d\n", n);
	
	fclose(arquivo);
	
	return 0;
}
