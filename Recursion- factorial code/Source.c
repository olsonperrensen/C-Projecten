#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int recursive_factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return (recursive_factorial(n - 1) *n);
	}
}

int main() {
	int how_many = 0, i;
	printf("I want table of factorial up to n: ");
	if (scanf("%d", &how_many) == 1)
	{
	printf("\n factorials\n");
	for (i = 1; i <= how_many; i++)
	{
		printf("\n%d\t %ld\n", i, recursive_factorial(i));
	}
	return 0;
	}
}