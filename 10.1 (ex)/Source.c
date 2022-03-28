#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
void swap(int[]);
void print(int[]);
int main(void)
{
	int a[SIZE] = {27,26,25,24,23,22,21,10,19,-476};
	swap(a);
	print(a);
	return 0;
}
void swap(int a[])
{
	int smallest_position = 0;
	int temp;
	for (int i = 0; i < SIZE; i++)
	{
		if (a[i] < a[smallest_position])
		{
			smallest_position = i;
		}
	}
	temp = a[0];
	a[0] = a[smallest_position];
	a[smallest_position] = temp;
}
void print(int a[])
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("\t%d", a[i]);
	}
}