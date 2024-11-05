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