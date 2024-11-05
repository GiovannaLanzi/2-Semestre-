#include <stdio.h>
int soma(int a, int b);
int main() {
int num1, num2;
printf("Digite o primeiro número: ");
scanf("%d", &num1);
printf("Digite o segundo número: ");
scanf("%d", &num2);
printf("A soma dos números é: %d\n", soma(num1, num2));
return 0;
}
int soma(int a, int b) {
return a + b;
}