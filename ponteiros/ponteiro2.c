#include <stdio.h>
int main() {
	int num = 507;
	int *ptr;
	ptr = &num;
	
	*ptr = *ptr+1;
	printf("%d\n", num);
	printf("%d\n", *ptr);
	printf("%p\n", *ptr);
	
	return 0;
}