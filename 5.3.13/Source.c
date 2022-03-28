#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, new_number = 0, max_number = -32768, min_number = 32767;
	for (int i = 0; i < 10; i++)
	{
		printf("\nEnter a number: ");
		scanf("%d%*c", &new_number);
		if (new_number > max_number)
		{
			max_number = new_number;
		}
		else if (new_number < min_number)
		{
			min_number = new_number;
		}
	}
	printf("\nMax nr: %d \t Min nr: %d", max_number , min_number);
	return 0;
}