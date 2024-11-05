#include <stdio.h>
#include <string.h>
#include <locale.h>//bibliotecas 
//Giovanna Lanzi Lopes Torres

typedef struct {//Define uma estrutura chamada Carro com três campos
    char modelo[50];//variavel do tipo char com limite de 50 
    int ano;//variavel do tipo inteiro
    double preco; //variavel do tipó double
} Carro;

void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;
}//Define uma função que recebe um ponteiro para uma estrutura Carro e um novo preço .

void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);
    printf("Ano: %d\n", c->ano);
    printf("Preço: R$ %.2lf\n", c->preco);
}//Define uma função imprimirCarro que recebe um ponteiro para Carro e imprime os valores de seus campos

int main() {//função principal
    setlocale(LC_ALL, "portuguese");
    Carro carro1;//variavel do tipo Carro
    
    strcpy(carro1.modelo, "XyZ");
    carro1.ano = 2020;
    carro1.preco = 90000.00;//ano é definido como 2020.
    //preco é definido como 90000.00.
    
    printf("Dados antes da modificação:\n");//impressão
    imprimirCarro(&carro1);//chamada da fução
    
    modificarPreco(&carro1, 115000.00);//Chama a função modificarPreco para alterar o preço de carro1 para 115000.00.
    
    printf("\nDados após a modificação do preço:\n");//impressão
    imprimirCarro(&carro1);//chamada da função
    
    return 0;//fim do programa
}