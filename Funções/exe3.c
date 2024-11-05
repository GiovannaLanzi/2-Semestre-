#include <stdio.h>
void imprimeMensagem(char mensagem[]); // Declaração da função
int main() {
	imprimeMensagem("Olá, Mundo!"); // Chamando a função com argumento
	return 0;
}

void imprimeMensagem(char mensagem[]) { // Definição com parâmetro
	printf("%s\n", mensagem);
}
