#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;
	int* p = &num;
	printf(": ");
	scanf("%d%*c", &num);

	printf("\n%d\n\n\n", *p);
	printf("\n%p\n\n\n", p);
	return 0;
}