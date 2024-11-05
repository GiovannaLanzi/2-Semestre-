#include <stdio.h>
#include <locale.h>

//Giovanna Lanzi Lopes Torres

int maior(int a, int b);

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num1, num2, resultado;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    resultado = maior(num1, num2);

    printf("O maior número entre %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
