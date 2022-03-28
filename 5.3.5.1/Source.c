#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, sum = 0, counter = 0; float mean = 0.00;

	printf("A num: ");
	scanf("%d%*c", &num);

	while (num != 999)
	{
		sum += num; // Placing it first solves 999 being added to their average
		printf("Another num: ");
		scanf("%d%*c", &num);
		counter++;
		mean = (float)sum / counter;
	}
	printf("Your mean is %f and your sum is %d based on the %d numbers you entered", mean, sum, counter);
	return 0;
}