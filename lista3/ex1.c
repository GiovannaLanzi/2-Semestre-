#include <stdio.h>
//Giovanna Lanzi Lopes Torres
typedef struct {//Define uma estrutura chamada pessoa, com três campos: peso, idade e altura.
    double peso; //declaração da variavel do tipo double
    int idade;//declaração da variavel do tipo int
    double altura;//declaração da variavel do tipo double
} pessoa;

void imprimePessoa(pessoa p) {
    printf("Peso: %lf. Idade: %d. Altura: %lf.\n\n", p.peso, p.idade, p.altura);//Função que recebe uma estrutura pessoa como argumento e imprime os valores de peso, idade e altura da pessoa.
}

int main() {//função principal
    pessoa pessoas[5], p1;//Declara um vetor pessoas de cinco elementos do tipo pessoa e uma variável p1 do tipo pessoa.

    pessoas[0].peso = 80.6;
    pessoas[0].idade = 40;
    pessoas[0].altura = 1.70;//Atribui valores aos membros peso, idade e altura da primeira estrutura pessoas[0] do vetor pessoas.

    p1 = pessoas[0];//Copia os valores de pessoas[0] para p1.

    if (p1.idade > 20)//Verifica se a idade de p1 é maior que 20. Se for, incrementa a idade de p1 em 1.
        p1.idade++;

    pessoas[1] = pessoas[0];//Copia os valores de pessoas[0] para pessoas[1].
    imprimePessoa(p1);
    imprimePessoa(pessoas[0]);
    imprimePessoa(pessoas[1]);
    imprimePessoa(pessoas[2]);
    imprimePessoa(pessoas[3]);
    imprimePessoa(pessoas[4]);//Imprime os dados de p1, pessoas[0], pessoas[1], pessoas[2], pessoas[3] e pessoas[4] chamando a função imprimePessoa para cada uma delas. 

    return 0;//fim do código
}

//dificuldades:
//Não entendi  por que precisa de um ponteiro na função lePessoa e não em imprimePessoa. 
//Testando o código, acabei passando pessoa diretamente, esquecendo de utilizar o operador & para passar o endereço