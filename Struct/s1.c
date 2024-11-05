struct Aluno {

char nome [30];
float nota;
}
int main () {
struct Aluno aluno1, aluno2;
printf("Digite nome:"); scanf ("%s", aluno1.nome);
printf("Digite nota:"); scanf ("%f", &aluno1.nota);
printf("Digite nome:"); scanf ("%s", aluno2.nome);
printf("Digite nota:"); scanf ("%f", &aluno2.nota);
printf ("%s nota=%.2f" , aluno1.nome,aluno1.nota);
printf ("%s nota=%.2f" , aluno2.nome,aluno2.nota);
}
