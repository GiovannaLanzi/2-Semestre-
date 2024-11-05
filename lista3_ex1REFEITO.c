#include <stdio.h>
//Giovanna Lanzi Lopes Torres
typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

void imprimePessoa(pessoa p) {
    printf("Peso: %.2lf. Idade: %d. Altura: %.2lf.\n", p.peso, p.idade, p.altura);
}

void lePessoa(pessoa *p) {
    printf("Digite o peso: ");
    scanf("%lf", &p->peso);

    printf("Digite a idade: ");
    scanf("%d", &p->idade);

    printf("Digite a altura: ");
    scanf("%lf", &p->altura);
}

int main() {
    pessoa pessoas[5];
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        lePessoa(&pessoas[i]);
    }

    printf("\nInformações das pessoas:\n");
    for (i = 0; i < 5; i++) {
        imprimePessoa(pessoas[i]);
    }

    return 0;
}
ex1_refeito.c
Exibindo ex1_refeito.c…
Atividade 3 - valor 20 pontos
FABIO FERREIRA DE ASSIS
•
12 de out.
20 pontos
Data de entrega: Hoje

Lista 3 - AED2_2024-2.pdf
PDF
1 comentário para a turma

GIOVANNA LANZI LOPES TORRESOntem
Boa tarde, Professor. O máximo de arquivos que o classroom aceita é 20, então só deu para fazer 10 exercícios.
