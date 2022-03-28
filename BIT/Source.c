#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void fn(int* a, size_t size)
{
	printf("\n\n\n\t\t\tIn fn: %d\n\n\n", sizeof(a));
	printf("\n\n\n\t\t\tIn fn (size_t): %d\n\n\n", sizeof(a)*size);
}

int main(void)
{
	unsigned int num = ~0;
	unsigned int num2 = 0;
	printf("\n%x\n\n\n", num2);
	printf("\n%x\n\n\n", num);
	printf("\n%u\n\n\n", num);
	int single = 7&3;
	printf("\n%d\n\n\n", single);
	char str1[99] = "Hello ";
	char str2[] = "World";
	strcat(str1, str2);
	printf("%s", str1);
	int chars[] = { 1,2,3,4,5,6,7 };
	fn(chars, 7);
	printf("\n\n\n\t\t\tIn main: %d\n\n\n", sizeof(chars));
	return 0;
}