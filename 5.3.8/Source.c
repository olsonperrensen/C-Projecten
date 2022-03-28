#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float num = 0.00, sum = 0.00;
	for (int i = 0; i < 10; i++)
	{
		printf("Enter [%d]: ", i);
		scanf("%f%*c", &num);
		sum += num;
		printf("\nSum: %3.2f\n\n\n", sum);
	}
	num = sum / 10;
	printf("Mean: %3.2f\n\n\n", num);
	return 0;
}