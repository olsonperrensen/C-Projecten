/*7.11 by Maximiliano Iturria*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/* Write a program with a main function and 3 extra functions.
- In the main function an array of 100 integers is declared and the 3 extra functions are called.
- The first function reads 1 integer in the interval [0, 100].
This integer represents the effective number of elements the array will contain.
This integer needs to be returned to the main program.
- The second function reads the correct number of integers and stores them in the array.
- The third function prints the previously read integers.
*/
#define SIZE 100



//int  read(int, int);
int  store(int[]);
int CalcMax(int[], int);
double CalcMean(int [], int);
void print(int[], int);

int main(void)
{
	int myarr[SIZE];
	int size = 0;
	size = store(myarr);
	if (size == 0)
	{
		printf("\n\nYou did not follow the rules.\n\n\n");
		return EXIT_FAILURE;
	}
	print(myarr, size);
	printf("\n\nThe mean of these numbers is: %.2lf\n\n\n", CalcMean(myarr, size));
	printf("\n\nThe max of all of these numbers was: %d\n\n\n", CalcMax(myarr, size));

	return EXIT_SUCCESS;
}

//int read(int min, int max)
//{
//	int userSize = 0;
//	printf("How large would you like the array to be, effecively?\nPlease choose between the range %d - %d: ", min, max);
//	scanf("%d", &userSize);
//	return userSize;
//
//}

int store(int arrayfn[])
{
	int each_item = 0;
	int counter = 0;
	while (each_item != 999)
	{
		printf("Please enter your array element (ends with 999): ");
		scanf("%d%*c", &each_item);
		if (each_item == 999) return counter;
		if (each_item < 0) return counter;
		arrayfn[counter] = each_item;
		counter++;
	}
	return counter;
}

void print(int arrayfn[], int userSize)
{
	printf("\nBased on your number, I could fill the array up to here:");
	for (int k = 0; k < userSize; k++)
	{
		printf("\t%d", arrayfn[k]);
	}
	return EXIT_SUCCESS;
}

double CalcMean(int row[], int size)
{
	double sum = 0, mean = 0.00;
	for (int i = 0; i < size; i++)
	{
		sum += row[i];
	}
	mean = sum / size;
	return mean;
}

int CalcMax(int row[], int size)
{
	int max = row[0], current_position = 0; //mean = 0.00;
	for (int i = 0; i < size; i++)
	{
		current_position = row[i];
		if (current_position > max)
		{
			max = current_position;
		}

	}
	//mean = sum / size;
	return max;
}