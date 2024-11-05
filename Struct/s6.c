#include <stdio.h>
typedef struct 
{
float Peso; 
int Idade; 
float Altura; 
} Pessoa; 
void ImprimePessoa(Pessoa P){
printf("Idade: %d Peso: %f Altura: %f\n", P.Idade, P.Peso, P.Altura);
}
void SetPessoa(Pessoa *P, int idade, float peso, float altura)
{ 
(*P).Idade = idade; 
P->Peso = peso; 
P->Altura = altura;
}
int main() {
Pessoa Joao, P1;
SetPessoa(&Joao, 15, 70.5, 1.75);
ImprimePessoa(Joao);
SetPessoa(&P1, 25, 60.5, 1.65);
ImprimePessoa(P1);
return 0;
}
