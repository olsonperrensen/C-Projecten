#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAXROW 3
#define MAXCOL 5
int main(void)
{
	int matrix[MAXROW][MAXCOL];
	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOL; j++)
		{
			matrix[i][j] = j + 10 * i;
		}
	}
	return EXIT_SUCCESS;
}