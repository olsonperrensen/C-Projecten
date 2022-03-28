#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 1;
	while (num > 30 || num < -30 || num != 0)
	{
		printf("\nnumber: ");
		scanf("%d%*c", &num);
		if (num == 0 || num < -30 || num > 30)
		{
			return -1;
		}
		printf("\n");
		if (num < 0)
		{
			for (int i = 0; i < (30 + num); i++)
			{
				printf(".");
			}
			for (int i = 0; i >= (num + 1); i--)
			{
				printf("*");
			}
			printf(" ");
			printf("|");
			printf(" ");
			for (int i = 0; i < 30; i++)
			{
				printf(".");
			}
		}
		if (num > 0)
		{
			for (int i = 0; i < 30; i++)
			{
				printf(".");
			}
			printf(" ");
			printf("|");
			printf(" ");
			for (int i = 0; i <= (num - 1); i++)
			{
				printf("*");
			}
			for (int i = 0; i < (30-num); i++)
			{
				printf(".");
			}
		}
	}
	printf("\n\t\t\t%d\n\n\n", num);
	return 0;
}