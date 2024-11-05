#include <stdio.h>
//Giovanna Lanzi Lopes Torres

int calcularResultado(int v[], int n);//Declaração da função 
int main() {//Função principal
    int vetor[5], i, resultado;//Declara um vetor com 5 inteiros
        for (i = 0; i < 5; i++) {//loop de 0 a 4
        vetor[i] = i*2;//cada elemento do vetor multiplicado por 2
    }
     resultado = calcularResultado(vetor, 5);//chamada da função
     printf("O resultado eh: %d\n", resultado);//impressão
     return 0;//fim da função principal
}

int calcularResultado(int v[], int n) {//definição da função
    int i, soma = 0;//declaração das variaveis como inteiro
    for (i = 0; i < n; i++) {//loop de 0 até n
        soma += v[i]; //soma de todos os elementos do loop
    }
    return soma;//fim do código
}