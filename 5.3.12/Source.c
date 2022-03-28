#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float base = 0.00, result; int exponent = 0;
	printf("Enter your base and exponent (by spaces): ");
	scanf("%f%u%*c", &base, &exponent);
	if (exponent > 0)
	{
		result = 1.00;
		for (int i = 0; i < exponent; i++)
		{
			result *= base;
		}
	}
	else
	{
		result = -1.00;
		for (int i = 0; i > exponent; i--)
		{
			result *= base;
		}
	}
	printf("\nYour numbers give: %12.2f as exponential result\n\n\n", result);
	return 0;
}