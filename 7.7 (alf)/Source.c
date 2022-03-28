/*
 This code is one of the exercises of the course C Introduction to Programming
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 20
#define COLUMNS 4

void ReadArray(int[], int);
void PrintMatrix(int[], int, int);

int main(void)
{
	int a[SIZE];

	ReadArray(a, SIZE);
	PrintMatrix(a, SIZE, COLUMNS);

	return 0;
}

void ReadArray(int a[], int length)
{
	printf("Please enter %d integer numbers: ", length);
	for (int i = 0; i < length; i++)
	{
		scanf("%d%*c", &a[i]);
	}
}

void PrintMatrix(int a[], int length, int columns)
{
	int row_sum = 0, column_sum = 0;
	printf("\n");
	for (int i = 0; i < length; i++)
	{
		row_sum += a[i];
		printf("%d\t\t", a[i]);
		if ((i + 1) % columns == 0)
		{
			printf("\n");
			printf("r_sum: %d", row_sum);
			row_sum = 0;
			printf("\n");
		}
	}
	for (int i = 0; i < columns; i++)
	{
		column_sum = a[i];
		for (int j = i + columns; j < length; j += columns)
		{
			column_sum += a[j];
		}
		printf("c_sum: %d\t", column_sum);
	}
	printf("\n");
}