/*
 * This code is one of the exercises of the course C Introduction to Programming
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define N 10 // maximum elements of the array (9 initial + 1 new to be place in order)

short int ReadArray(int[], int);	// function to read the first 9 elements
void PlaceNewElement(int[], int, int);	// function to place the tenth element
int FindPos(int[], int, int);			// function to find the position of the new element
void PrintArray(int[], int);			// function to print the array


int main(void)
{
	int array[N], len = N, tenth;	// array, array length, new element
	short int signal;	// variable to indicate whether the array is ordered or not

	signal = ReadArray(array, len);

	if (signal == 1)	// if satisfied means the array entered is an ordered array
	{
		printf("Please insert the 10th integer: ");
		scanf("%d%*c", &tenth);
		PlaceNewElement(array, len, tenth);
		printf("\nThe final list with the 10th element placed in order reads: \n");
		PrintArray(array, len);
	}

	return 0;
}


/*Here we define our functions*/

void PlaceNewElement(int a[], int len, int new_element)
{
	short int pos;

	pos = FindPos(a, len, new_element);

	if (pos == 9)	// if the new element is the largest place to the last position of the array
	{
		a[9] = new_element;
	}
	else
	{
		for (int i = len - 2; i >= pos; i--)	// we need to dislocate 10 - 'pos' elements
		{
			a[i + 1] = a[i];	// dislocating the elements begining from the highest
		}
		a[pos] = new_element;
	}
}

int FindPos(int a[], int len, int new_element)
{
	int position = 0, i = 0;

	if (new_element > a[0])	// checks whether the new element is the smallest
	{
		while (new_element > a[i] && i < len - 1)	// linear search for the new element position
		{
			position = position + 1;
			i++;
		}
	}
	return position;
}

short int ReadArray(int a[], int len)
{
	short int signal = 1;
	printf("Please introduce 9 integers: ");
	scanf("%d%*c", &a[0]);					// reads first user input
	for (int i = 1; i < len - 1; i++)		// we check if the next 8 inputs of the user are ordered
	{
		scanf("%d%*c", &a[i]);
		if (a[i] < a[i - 1])				// if not ordered ---> terminate!
		{
			printf("Program terminated. Not ordered list detected.\n");
			signal = 0;						// this signals that the array is not ordered
			break;
		}
	}
	return signal;
}

void PrintArray(int a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}