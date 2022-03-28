#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("Please enter an integer number: ");
	scanf("%d%*c", &num);
	if (num == 0)
	{
		printf("\nYour number '%d' is zero. You are such a neutral being!\n\n\n", num);
	}
	if (num > 0)
	{
		printf("\nYour number '%d' is positive. Keep up that vibe!\n\n\n", num);
	}
	if (num < 0)
	{
		printf("\nYour number '%d' is negative. Let's give it a cold shower!\n\n\n", num);
	}
}