#include <stdio.h>
//Giovanna Lanzi Lopes Torres
int somarValores(int vetor[], int tamanho) {
    int soma = 0, i=0;
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int tamanho, i;
    printf("Digite a quantidade de elementos no vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    printf("Digite os %d valores:\n", tamanho);
    for (i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    int soma = somarValores(vetor, tamanho);
    float media = (float)soma / tamanho;
    printf("Soma dos valores: %d\n", soma);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}