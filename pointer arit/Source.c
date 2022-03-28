#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define Si sizeof("hello world")

int main(void)
{
	int* p;
//	int* a;
//	a = malloc(Si);
	int a[Si];

	p = a;
	for (int i = 0; i <= Si -1; i++) // array size - 1 bc array indices are zero-based
	{
		a[i] = i+1;
	}
	for (int i = 0; i < Si - 1; i++)
	{
		p += 1;
	}

	return EXIT_SUCCESS;
}