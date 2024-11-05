#include<stdio.h>
#include<stdlib.h>

int main() {
int n;
scanf("%d", &n);

int *vetor = malloc(sizeof(int) * n);
if (vetor == NULL) {
	printf("Erro na alocacao.\n");
	return -1;
}
int i;
for(i = n-1; i >= 0; i--)
	vetor[i] = n - i;

for(i = n-1; i >= 0; i--)
	printf("%d ", vetor[i]);
	
free(vetor);

return 0;
}