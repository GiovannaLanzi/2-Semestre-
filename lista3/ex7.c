#include <stdio.h>
//Giovanna Lanzi Lopes Torres
void encontraMaiorValor(int vetor[], int tamanho, int *maiorValor, int *posicao) {
    *maiorValor = vetor[0];
    *posicao = 0;
    int i;
    
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > *maiorValor) {
            *maiorValor = vetor[i];
            *posicao = i;
        }
    }
}

int main() {
    int tamanho;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int vetor[tamanho], i;
    
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    int maiorValor, posicao;
    encontraMaiorValor(vetor, tamanho, &maiorValor, &posicao);
    
    printf("O maior valor eh %d e esta na posicao %d.\n", maiorValor, posicao);
    
    return 0;
}