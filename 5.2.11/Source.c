#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n0, n1, n2;
	printf("Please provide 3 integers: ");
	scanf("%d%d%d%*c", &n0, &n1, &n2);
	// n0 always largest
	if (n0 > n1 && n0 > n2 && n1 > n2)
	{
		printf("\n\n\n\t%d %d %d\n\n\n", n0, n1, n2);
	}
	else if (n0 > n1 && n0 > n2 && n2 > n1)
	{
		printf("\n\n\n\t%d %d %d\n\n\n", n0, n2, n1);
	}
	// n1 always largest
	if (n1 > n0 && n1 > n2 && n0 > n2)
	{
		printf("\n\n\n\t%d %d %d\n\n\n", n1, n0, n2);
	}
	else if (n1 > n0 && n1 > n2 && n2 > n0)
	{
		printf("\n\n\n\t%d %d %d\n\n\n", n1, n2, n0);
	}
	// n2 always largest
	if (n2 > n0 && n2 > n1 && n0 > n1)
	{
		printf("\n\n\n\t%d %d %d\n\n\n", n2, n0, n1);
	}
	else if (n2 > n0 && n2 > n1 && n1 > 0)
	{
		printf("\n\n\n\t%d %d %d\n\n\n", n2, n1, n0);
	}
	return 0;
}