#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXROW 3
#define MAXCOL 5

int main(void)
{
	int a[MAXROW][MAXCOL]; // in that order: Rows first, Columns after
 /*An array will reserve the base address + the number of items, so they end up grouped together
 in RAM*/

	// loop for the rows:
	for (int row = 0; row < MAXROW; row++)
	{
		// loop for the columns:
		for (int col = 0; col < MAXCOL; col++)
		{
			a[row][col] = col+10*row;
		}
	}
	return 0;
}