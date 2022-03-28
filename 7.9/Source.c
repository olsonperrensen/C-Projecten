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
void print(int[], int);

int main(void)
{
	int myarr[SIZE];
	int size = 0;
	size = store(myarr);
	print(myarr, size);
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