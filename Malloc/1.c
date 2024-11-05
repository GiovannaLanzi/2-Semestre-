#include <stdio.h>
#include <stdlib.h>

int main() {
	int *n;
	n = malloc(sizeof(int));
	
	if(n != NULL) {
		*n = 507;
		printf("%d\n", *n);
		free(n);
	} 
	else {
		printf("Erro na alocacao.\n");
	}
	
	return 0;
}