#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define SIZE 20
#define COLUMNS 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ReadArray(int[], int);
void PrintMatrix(int [], int, int);

int main(void)
{
	int a[SIZE];
	ReadArray(a, SIZE);
	PrintMatrix(a, SIZE, COLUMNS);
 	return EXIT_SUCCESS;
}

void ReadArray (int a[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand()%100;
	}
}

void PrintMatrix(int a[], int size, int columns)
{
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d\t\t", a[i]);
		if ((i + 1) % columns == 0) // when you reach 3, 6, 9, 12, make a new line
		{
			printf("\n");
		}
	}
	return 0;
}