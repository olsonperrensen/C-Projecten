#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("Please enter an integer number: ");
	scanf("%d%*c", &num);
	if (num % 2 == 0)
	{
		printf("\nYour number '%d' is even. Keep that vibe!\n\n\n", num);
		return 0;
	}
	else
	{
		printf("\nYour number '%d' is odd, let's give it a cold shower.\n\n\n", num);
		return -1;
	}
}