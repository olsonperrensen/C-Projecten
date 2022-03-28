/*
 * This code is one of the exercises of the course C Introduction to Programming
 --------- statement -------------------------------------
 This program has functions that reads a list of integers
 and prints all  integers of that list followed by the
 number of occurrences.
 The list is ended with the number 999
 that cannot be taken into account.
 The list contains maximal 10 different numbers.
 --------------------------------------------------------
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define ROW 10
#define COL 2

int ReadListOcurrences(int[][COL], int);
void PrintMatrix(int[][COL], int);


int main(void)
{
	int matrix[ROW][COL], index;
	index = ReadListOcurrences(matrix, ROW);
	PrintMatrix(matrix, index);

	return 0;

}

/*Functions are defined here*/

int ReadListOcurrences(int a[][COL], int row)
{
	// temporary variable, index (array effective length) and signal if element is present or not
	int temp, index = 0, signal;

	for (int i = 0; i < row; i++)		// fill up all ocurrences to zero
	{
		a[i][1] = 0;
	}

	printf("Enter a list of integers (end with 999):\n");
	scanf("%d%*c", &temp);				// scans first integer from buffer
	printf("\n");

	while (temp != 999 && index < row)	// row is the maximum numbers to be entered (10)
	{
		signal = 0;						// initialize signal = 0 (integer is not present)
		for (int i = 0; i < index; i++)
		{
			if (a[i][0] == temp)		// if it is already present
			{
				a[i][1]++;				// counter goes up
				signal = 1;				// signals the element is already present 
				break;					// goes out of the loop
			}
		}
		if (signal == 0)				// if satisfied, new integer is new
		{
			a[index][0] = temp;			// the temp. variable becomes part of the array
			a[index][1] = 1;			// its respective counter becomes 1
			index++;					// effective length of the array
		}
		scanf("%d%*c", &temp);
	}
	return index;
}


void PrintMatrix(int a[][COL], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%8d\t", a[i][j]);
		}
		printf("\n");
	}
}