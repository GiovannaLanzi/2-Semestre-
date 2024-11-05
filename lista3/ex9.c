#include <stdio.h>
//Giovanna Lanzi Lopes Torres
int multiplicaValores(int vetor[], int tamanho) {
    int produto = 1, i;
    for (i = 0; i < tamanho; i++) {
        produto *= vetor[i];
    }
    return produto;
}

int main() {
    int tamanho, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    int resultado = multiplicaValores(vetor, tamanho);

    printf("O resultado da multiplicacao dos valores do vetor eh: %d\n", resultado);

    return 0;
}