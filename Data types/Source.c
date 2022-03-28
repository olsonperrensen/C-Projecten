#include <stdio.h>

int main() {
	printf("int is %lu bytes.\n", sizeof(int));
	printf("long is %lu bytes.\n", sizeof(long int));
	printf("char is %lu bytes.\n", sizeof(char));
	printf("float is %lu bytes.\n", sizeof(float));
	printf("double is %lu bytes.\n", sizeof(double));
	printf("long double is %lu bytes.\n", sizeof(long double));
	return 0;
}