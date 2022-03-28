#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float base = 0.00, result = 1.00; unsigned int exponent = 0;
	printf("Enter your base and exponent (by spaces): ");
	scanf("%f%d%*c", &base, &exponent);
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	printf("\nYour numbers give: %12.2f as exponential result\n\n\n", result);
	return 0;
}