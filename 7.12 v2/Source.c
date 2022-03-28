#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAXROW 2
#define MAXCOL 2
#define SIZE 4

void r(int[][MAXCOL]);
void c(int[][MAXCOL]);
void p(int[][MAXCOL]);

int main(void)
{
	int a[MAXROW][MAXCOL];
	r(a);
	c(a);
	p(a);
	return 0;
}

void r(int a[][MAXCOL])
{
	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOL; j++)
		{
			printf("\nn[ROW %d][COL %d]]: ", i+1,j+1);
			scanf("%d%*c", &a[i][j]);
		}
	}
}

void c(int arr[][MAXCOL])
{
    int t, i, j, temp;
    for (t = 0; t < (MAXROW * MAXCOL)-1; t++) // rows times columns = pass through every single item (last one against nothing)
    {
        for (i = 0; i < MAXROW; i++)
        {
            for (j = 0; j < MAXCOL - 1; j++)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
        }
        /*Until here, every row is ordered. NOW between rows!*/
        for (i = 0; i < MAXROW - 1; i++) // last row compared to NOTHING
        {
            if (arr[i][MAXCOL - 1] > arr[i + 1][0]) // last column is not 2, but 1. i logic same as 1D array.
            {
                temp = arr[i][MAXCOL - 1];
                arr[i][MAXCOL - 1] = arr[i + 1][0];
                arr[i + 1][0] = temp;
            }
        }
    }
}

void p(int a[])
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("\n\tOrdered array: %d", a[i]);
	}
    printf("\n\n");
}

/*
Found on https://stackoverflow.com/questions/36084752/2d-arrays-in-bubble-sorting
*/