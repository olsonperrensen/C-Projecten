#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double exponentiation(double, int);

int main(void)
{
	printf("%.0lf", exponentiation(2.00, 4));
	printf("\n%.0lf", exponentiation(2, 5));
	printf("\n%.0lf", exponentiation(2, 0));
}

double exponentiation(double base, int exponent)
{
	double res = 1;
	for (int i = 0; i < exponent; i++)
	{
		res *= base; // How to attach more bases * bases * bases ... ? Problem was *= i instead of *= res
	}
	return res;
}