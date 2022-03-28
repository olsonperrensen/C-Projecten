#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 6

int main(void)
{
	char a[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = 62+i;
		putchar(a[i]);
	}
}