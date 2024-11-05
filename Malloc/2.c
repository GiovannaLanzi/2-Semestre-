#include <stdio.h>
#include <stdlib.h>

int main() {
	int valor;
	int *n = &valor;
	
	*n = 507;
	printf("%d\n", *n);

	return 0;
}