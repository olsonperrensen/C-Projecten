#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, new_number = 0, max_number = 0, min_number = 0, counter = 0, counterMinPlace = 0, counterMaxPlace = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("\nEnter a number: ");
		scanf("%d%*c", &new_number);
		counter++;
		if (new_number > max_number)
		{
			max_number = new_number;
			counterMaxPlace = counter;
		}
		else if (new_number < min_number)
		{
			min_number = new_number;
			counterMinPlace = counter;
		}
	}
	printf("\nMax nr: %d [%d]\t Min nr: %d [%d]", max_number, counterMaxPlace, min_number, counterMinPlace);
	return 0;
}