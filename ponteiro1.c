#include <stdio.h>

int main() {
	
	int num = 507;
	int *pt1 = &num;//vao ser iguais na impressão (pt1 e &num)
	
	printf("%d %p %p %p\n", num, &num, pt1, &pt1);
	
	return 0;
}
