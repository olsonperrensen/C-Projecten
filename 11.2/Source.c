/*
Write a program to swap two numbers. 
The first number is stored in the variable number1 and the second in the variable 
number2. 
After the swap the variable number1 contains the second number and number2 
contains the first number. 
Use functions: Read, Swap, Print. Do not use arrays!

Enter 2 numbers: 5 10 
The value of the first variable is 5, the value of the second variable is 10. 
After the swap, variable 1 contains 10 and variable 2 contains 5.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Read(int*, int*);
void Swap(int*, int*);
void Print(int*, int*);
int main(void)
{
	int number1, number2;
	Read(&number1, &number2);
	Swap(&number1, &number2);
	Print(&number1, &number2);
	return 0;
}
void Read(int* n1, int* n2)
{
	printf("Enter 2 numbers: ");
	scanf("%d%d%*c",n1,n2);
	printf("\nThe value of the first variable is %d, the value of the second variable is %d.", *n1, *n2);
}
void Swap(int* n1, int* n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
void Print(int* n1, int* n2)
{
	printf("\n\n\tAfter the swap, variable 1 contains %d and variable 2 contains %d.\n\n\n", *n1, *n2);
}