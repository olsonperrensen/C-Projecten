#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long recursive_fib(int n)
{
	if (n <= 1)
	{
		return n;
	}
	else
	{
		return(recursive_fib(n - 1) + recursive_fib(n - 2));
	}
}

int main(void) {
	int userNr = 0, i;
	printf("I would like to print a table up to ... : ");
	scanf("%d", &userNr);

	for (i = 0; i < userNr; i++)
	{
		printf("\n%d\t %ld\n", i, recursive_fib(i));
	}
	return 0;
}