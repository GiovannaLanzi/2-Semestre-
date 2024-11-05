#include<stdio.h>
void funcao_teste(int param1);
int main() {
	funcao_teste(507);

	return 0;
}
void funcao_teste(int param1) {
	int a = param1, b=0, c=0;
	if(param1 > 0) {
		b = 0;
		int i;
		for(i = 0; i < 10; i++) {
			c = i * i;
			b += c;
			printf("%d %d %d\n", a, b, c);
		}
		printf("%d %d %d\n", a, b, c);
	}
	printf("%d %d %d", a, b, c);
}