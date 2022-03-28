/*
Example: 
Write a program that asks the user to enter the number of rows and columns needed, 
that dynamically creates the requested array, fills it with data and prints that data.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int rows, cols, total;
	int* p = NULL;
	printf("enter the number of rows and columns needed: ");
	scanf("%d%d%*c",&rows,&cols);
	total = rows * cols;
	p = (int*)malloc(total*sizeof(int));
	for (int i = 0; i < total; i++,p++)
	{
		*p = i;
	}
	return 0;
}