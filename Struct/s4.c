#include <stdio.h>
typedef struct 
{
float Peso; 
int Idade; 
float Altura; 
} Pessoa; 

void ImprimePessoa(Pessoa P)
{
printf("Idade: %d Peso: %f Altura: %f\n", P.Idade, P.Peso, P.Altura);
}
int main(){
Pessoa Aluno1, Aluno2, P1, P2;
Pessoa Pessoas[10];
Aluno1.Idade = 20;
Aluno1.Peso = 55.5;
Aluno1.Altura = 1.55;
Pessoas[4].Idade = 21;
Pessoas[4].Peso = 75.0;
Pessoas[4].Altura = 1.75;
P2 = Pessoas[4];
P2.Idade++;
ImprimePessoa(Pessoas[4]);
ImprimePessoa(P2);
return 0;
}