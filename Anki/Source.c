#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 60

int main(void)
{
	int a[SIZE] = {0};
	int k = 0;
	int temp = 0;

	for (int i = SIZE-1; i > 0; i--,k++)
	{
		a[k] = i;
	}

	for (int i = 1; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	return 0;
}