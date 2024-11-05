#include <stdio.h>
int primo(int num);
int somaPrimos(int n);
int main() {
int n;
printf("Digite o valor de N: ");
scanf("%d", &n);
printf("A soma dos %d primeiros números primos é: %d\n", n, somaPrimos(n));
return 0;
}
int primo(int num) {
if (num < 2) return 0;
for (int i = 2; i * i <= num; i++) {
if (num % i == 0) return 0;
}
return 1;
}
int somaPrimos(int n) {
int soma = 0, count = 0, num = 2;
while (count < n) {
if (primo(num)) {
soma += num;
count++;
}
num++;
}
return soma;
}