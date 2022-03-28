#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

int p(char[]);

int main(void)
{
	char arr[SIZE];
	int flag;
	for (int i = 0; i < SIZE - 1; i++)
	{
		printf("\n: ");
	}
	flag = p(arr);
	if (flag == 1)
	{
		printf("\nPalindrome\n\n");
	}
	else
	{
		printf("\nNot\n\n");
	}
	return EXIT_SUCCESS;
}

int p(char a[])
{
}
