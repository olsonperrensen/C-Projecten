#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, new_number = 0, sum = 0;
	printf("Enter your INITIAL integer: ");
	if (scanf("%d%*c", &num))
	{
	while (sum < num)
	{
		printf("\nEnter your SUM number: ");
		if (scanf("%d%*c", &new_number))
		{
			sum += new_number;
			if (sum > num)
			{
				printf("\nYou were %d numbers ahead of the limit!\nExiting...\n\n", (sum - num));
				return -1;
			}
		}
		else
		{
			printf("You did not enter an integer.");
			return -1;
		}
	}
	printf("\nYou have matched the results! %d (your sum of numbers) is equal to %d (the original number you gave us)\n\n\n", sum, num);
	}
	else
	{
		return -1;
	}
	return 0;
}