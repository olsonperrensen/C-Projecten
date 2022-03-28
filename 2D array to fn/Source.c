#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAXROW 3
#define MAXCOL 5

void read(int [][MAXCOL], int row, int col);
void printt(int[][MAXCOL], int row, int col);

int main(void)
{
	int a[MAXROW][MAXCOL];
	read(a, MAXROW, MAXCOL);
	printt(a, MAXROW, MAXCOL);
	return EXIT_SUCCESS;
}

void read(int matrix[][MAXCOL], int row, int col)
{
	for (int row = 0; row < MAXROW; row++)
	{
		// loop for the columns:
		for (int col = 0; col < MAXCOL; col++)
		{
			matrix[row][col] = col + 10 * row;
		}
	}
}

void printt(int a[][MAXCOL], int row, int col)
{
	for (int row = 0; row < MAXROW; row++)
	{
		// loop for the columns:
		for (int col = 0; col < MAXCOL; col++)
		{
			printf("\t%d", a[row][col]);
		}
		printf("\n");
	}
}