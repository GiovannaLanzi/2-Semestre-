#include <stdio.h>
int fibonacci(int n);
int main() {
int n;
printf("Digite o valor de n: ");
scanf("%d", &n);
printf("O %d-ésimo termo da série de Fibonacci é: %d\n", n, fibonacci(n));
return 0;
}
int fibonacci(int n) {
if (n <= 1) return n;
return fibonacci(n - 1) + fibonacci(n - 2);
}