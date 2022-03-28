#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct bunchofnumbers
{
	char c1, c2, c3;
};

int main(void)
{
	struct bunchofnumbers mynumbers;
	mynumbers.c1 = 'x';
	mynumbers.c2 = 'y';
	mynumbers.c3 = 'z'; // depending on the data type, the memory address space that it will be reserved will change.
	printf("%c",mynumbers.c1);
	printf("\t%c", mynumbers.c2);
	printf("\t%c\n\n", mynumbers.c3);
	return 0;
}