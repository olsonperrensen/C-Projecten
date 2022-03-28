#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXROW 2
#define MAXCOL 10

void ReadRow(int[][MAXCOL]);
void Calculate(int[][MAXCOL], int[]);
void PrintMatrix(int[]);

int main(void)
{
	int numbers[MAXROW][MAXCOL];
	int third[MAXCOL] = {0};
	ReadRow(numbers);
	Calculate(numbers, third);
	PrintMatrix(third);
	return 0;
}

void ReadRow(int n[][MAXCOL])
{
	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOL; ++j)
		{
			printf("\nEnter your integer [%d][%d]: ", i,j);
			scanf("%d%*c", &n[i][j]);
		}
	}
}
void Calculate(int a[][MAXCOL], int b[])
{
	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOL; j++)
		{
			b[j] = b[j] + a[i][j]; // Combine previous val w/new (array first filled with zeros)
		}
	}
}
void PrintMatrix(int n[])
	{
	printf("\n\n");
	for (int i = 0; i < MAXCOL; i++)
	{
			printf("%4d", n[i]);
	}
}