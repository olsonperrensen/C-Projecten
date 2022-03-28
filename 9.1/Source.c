#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXROW 10
#define MAXCOL 10

void fill(int[][MAXCOL]);
void print(int[][MAXCOL]);

int main(void)
{
	int numbers[MAXROW][MAXCOL];
	fill(numbers);
	print(numbers);
	return 0;
}

void fill(int n[][MAXCOL])
{
	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOL; ++j)
		{
			n[i][j] = (j+1)*(i+1); // the multiplication table!
		}
	}
}
void print(int n[][MAXCOL])
{
	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOL; j++)
		{
			printf("%4d",n[i][j]);
		}
		printf("\n");
	}
}