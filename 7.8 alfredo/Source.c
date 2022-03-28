/*
 This code is one of the exercises of the course C Introduction to Programming
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 100

int ReadSize(int, int);
void ReadArray(int[], int);
void PrintArray(int[], int);

int main(void)
{
	int row[MAX], size;

	size = ReadSize(0, MAX);
	ReadArray(row, size);
	PrintArray(row, size);

	return 0;
}

int ReadSize(int min, int max)
{
	int size;
	printf("Please insert an integer between %d and %d: ", min, max);
	scanf("%d%*c", &size);

	return size;
}

void ReadArray(int row[], int size)
{
	int input;
	printf("\nPlease enter the %d elements of the array: ", size);
	for (int i = 0; i < size; i++)
	{
		scanf("%d%*c", &row[i]);
	}
}

void PrintArray(int row[], int size)
{
	printf("\nThe elements of the array are: \n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", row[i]);
	}
	printf("\n");
}

