#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

void read(int [],int);
void print(int[], int);

int main(void)
{
	int s[SIZE];
	read(s,SIZE);
	print(s, SIZE);
	return 0;
}

void read(int a[], int length)
{
	int userInput;
	int insideArray[100];
	int i = 0;
	printf("Enter your item (end with 999): ");
	scanf("%d%*c", &userInput);
	while (userInput != 999 && insideArray[i] != 999)
	{
		printf("Enter your item (end with 999): ");
		scanf("%d%*c", &insideArray[i]);
		i++;
	}
}
void print(int a[], int length)
{
	int counter = length-1;
	printf("\n\nYour array contains the following numbers: ");
	for (int j = 0; j < length; j++)
	{
		printf("\t%d", a[counter]);
		counter--;
	}
	printf("\n\n");
}