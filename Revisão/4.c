#include <stdio.h>
int somatorio(int n);
int main() {
int n;
printf("Digite o valor de n: ");
scanf("%d", &n);
printf("O resultado do somatório é: %d\n", somatorio(n));
return 0;
}
int somatorio(int n) {
int soma = 0;
for (int i = 1; i <= n; i++) {
soma += i * (i + 1);
}
return soma;
}