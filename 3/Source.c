#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, sum = 0, counter = 0;
	float mean = 0.00;
	while (num != 999)
	{
		sum += num;
		printf("Enter a number: ");
		scanf("%d%*c", &num);
		if (num < 999) counter++;
	}
	mean =  (float) sum / counter;

	printf("\nTheir mean is: %3.2f\n\n\n", mean);
	return 0;
}