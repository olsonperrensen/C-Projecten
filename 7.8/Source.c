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



int  read(int, int);
void  store(int [],int);
void print(int [], int);

int main(void)
{
	int myarr[SIZE];
	int* p;
	p = myarr;
	int userSize = read(0,100);
	store(myarr, userSize);
	print(myarr, userSize);
	return EXIT_SUCCESS;
}

int read(int min, int max)
{
	int userSize = 0;
	printf("How large would you like the array to be, effecively?\nPlease choose between the range %d - %d: ", min, max);
	scanf("%d", &userSize);
	return userSize;

}

void store(int arrayfn[],int userSize)
{
	for (int j = 0; j < userSize; j++)
	{
		arrayfn[j] = j + 1;
	}
	return EXIT_SUCCESS;
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