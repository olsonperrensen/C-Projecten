#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sumArray(int*, int n);

int main(void)
{
	int data[4] = { 4, 6, 8, 3 };
	int sum = sumArray(data, 4);
	printf("sum is %d\n\n", sum);
	return EXIT_SUCCESS;
}

int sumArray(int* array, int n)
{
	int internalSum = 0;
	int* ptr;
	ptr = array;
	for (int i = 0; i < n; i++)
	{
		internalSum += *ptr; // point to the dereferenced value 
		ptr++; // pointer arithmetic
	}
	return internalSum;
}