#include <stdio.h>
#include <locale.h>
//Giovanna Lanzi Lopes Torres

//Dificuldades: declarar as funções e juntar as informações

float mediaTurma(int numAlunos) {
    setlocale (LC_ALL, "Portuguese");
    float soma = 0.0;
    float nota;
    int i=0;

    for (i = 0; i < numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    return soma / numAlunos; 
}

float mediaEscola(int numTurmas) {
    setlocale (LC_ALL, "Portuguese");
    float somaMedia = 0.0;
    int i=0;

    for (i = 0; i < numTurmas; i++) {
        int numAlunos;
        printf("Digite o número de alunos da turma %d: ", i + 1);
        scanf("%d", &numAlunos);

        float media = mediaTurma(numAlunos);
        printf("A média da turma %d é: %.2f\n", i + 1, media);
        somaMedia += media; 
    }

    return somaMedia / numTurmas; 
}

int main() {
	setlocale (LC_ALL, "Portuguese");
    int numTurmas;

    printf("Digite o número de turmas: ");
    scanf("%d", &numTurmas);

    float mediaGeral = mediaEscola(numTurmas);
    printf("A média geral da escola é: %.2f\n", mediaGeral);

    return 0;
}
