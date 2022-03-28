#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int main(void)
{
	int num[SIZE];
	int dummy;
	int i = 0;
	int ii = 0;
	printf(": ");
	scanf("%d%*c", &dummy);
	while (dummy != 999 && i < SIZE)
	{
		num[i] = dummy;
		printf(": ");
		scanf("%d%*c", &dummy);
		i++;
	}
	for (int j = 0; j < SIZE; j++)
	{
		if (num[j] == )
	}
	return 0;
}