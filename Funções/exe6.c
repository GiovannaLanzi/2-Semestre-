#include<stdio.h>
double resultado;

void calcula_quadrado(double num);

double calcula_soma(double n1, double n2);

int main() {
	int a = 1, b = 3;
	
	resultado = calcula_soma(a, b);
	printf("%.2lf\n", resultado);
	
	calcula_quadrado(resultado);
	printf("%.2lf\n", resultado);
	
	calcula_quadrado(resultado);
	printf("%.2lf\n", resultado);
	
	return 0;
}

void calcula_quadrado(double num) {
	resultado = num * num;
}
double calcula_soma(double n1, double n2) {
	double r;
	r = n1 + n2;
	return r;
}