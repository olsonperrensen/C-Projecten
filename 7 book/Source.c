#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 100

int main(void)
{
	int num[SIZE] = { 99 };
	for (int i = 0; i < SIZE; i++)
	{
		num[i] = i+1;
	}
	for (int j = 99; j >= 0; j--)
	{
		printf("\t%d", num[j]);
	}
	return 0;
}