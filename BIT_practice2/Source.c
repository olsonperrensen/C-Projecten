#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char* a = malloc(sizeof(int));
	printf("%d", *a);
}