#include <stdio.h>
int main() {
	int x = 2;
	int *y = &x;
	
	*y = 3;
	
	printf("%d\n", x);
	printf("%p\n", y);
	printf("%p\n", &x);
	printf("Endereço de y %p\n", *y);
	
	return 0;
}