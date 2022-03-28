#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("Please enter an integer number: ");
	scanf("%d%*c", &num);
	printf("%d matches conditions: ", num);
	// A
	if (num >= 3 && num < 8.5)
	{
		printf("A, ", num);
	}
	else
	{
		printf("not A, ", num);
	}
	// B
	if (num < 3 || num > 5.4 && num <= 7.3 || num > 13)
	{
		printf("B, ", num);
	}
	else
	{
		printf("not B, ", num);
	}
	// C
	if (num != 3 && num < 9.75)
	{
		printf("C\n\n\n", num);
	}
	else
	{
		printf("not C\n\n\n", num);
	}
	return 0;
}