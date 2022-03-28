#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define SIZE 12
#define COLUMNS 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ReadArray(int[], int);
void PrintMatrix(int[], int, int);

int main(void)
{
	int a[SIZE];
	ReadArray(a, SIZE);
	PrintMatrix(a, SIZE, COLUMNS);
	return EXIT_SUCCESS;
}

void ReadArray(int a[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 100;
	}
}

void PrintMatrix(int a[], int size, int columns)
{
	int sum = 0;
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d\t\t", a[i]);
		sum += a[i];
		if ((i + 1) % columns == 0) 
			/* 
			(i + 1 bc i starts at 0) ...
			When you reach 3, 6, 9, 12 // 5, 10, 15, 20:  Make a new line 
			*/
		{
			printf("\n\n\t\t\tThis row equals %d\n\n", sum);
			sum = 0;
		}
	}
	return 0;
}