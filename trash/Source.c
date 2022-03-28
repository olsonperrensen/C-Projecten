#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num = 0;
	int* p = &num;
	printf(": ");
	scanf("%d%*c", p);
	printf("\n%d\n\n\n", *p);
	free(p);
	//printf("\n%d\n\n\n", *p);
	return 0;
}