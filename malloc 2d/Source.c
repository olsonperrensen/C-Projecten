#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int* p = malloc(sizeof(int)*2*4);
	printf("%d",p[1*3]=4);
	return 0;
}