#include <stdio.h>
float mediaTurma(int num_alunos);
float mediaEscola(int num_turmas);
int main() {
int num_turmas;
printf("Digite o número de turmas: ");
scanf("%d", &num_turmas);
printf("A média geral da escola é: %.2f\n", mediaEscola(num_turmas));
return 0;
}
float mediaTurma(int num_alunos) {
int soma = 0, nota;
for (int i = 0; i < num_alunos; i++) {
printf("Digite a nota do aluno %d: ", i + 1);
scanf("%d", &nota);
soma += nota;
}
return (float)soma / num_alunos;
}
float mediaEscola(int num_turmas) {
float soma_medias = 0;
int num_alunos;
for (int i = 0; i < num_turmas; i++) {
printf("Digite o número de alunos da turma %d: ", i + 1);
scanf("%d", &num_alunos);
float media = mediaTurma(num_alunos);
printf("Média da turma %d: %.2f\n", i + 1, media);
soma_medias += media;
}
return soma_medias / num_turmas;
}