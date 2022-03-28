#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 100

void fn(int arraysOnly[]);

int main(void)
{
	int num[SIZE];
	fn(num);
}

void fn(int arraysOnly[])
{
	for (int i = 0; i < SIZE; i++)
	{
		arraysOnly[i] = i+1;
		printf(" %d", arraysOnly[i]);
	}
	printf("\n\n");
}