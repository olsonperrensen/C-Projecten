#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXROW 3
#define MAXCOL 512

void readArray(int my_array_placeholder[][MAXCOL]);
void printArray(int my_arr[][MAXCOL]);

int main(void)
{
	int myarray[MAXROW][MAXCOL];
	readArray(myarray);
	printArray(myarray);
	return 0;
}

void readArray(int my_array_placeholder[][MAXCOL])
{
	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOL; j++)
		{
			my_array_placeholder[i][j] = j+i+2+((j + i + 2)*(j + i + 2));
		}
	}
}
void printArray(int my_arr[][MAXCOL])
{
	for (int i = 0; i < MAXROW; i++)
	{
		for(int k = 0; k < MAXCOL; k++)
		{
			printf("%3d", my_arr[i][k]);
		}
	}
}