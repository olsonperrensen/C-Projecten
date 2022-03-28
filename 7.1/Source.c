#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 7

int main(void)
{
	int temp[SIZE];
	float sum = 0.00, mean;
	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter the temp of day %d:  ", i+1);
		scanf("%d%*c", &temp[i]);
		sum += temp[i];
	}
	mean = sum / SIZE;
	printf("\nmean is is %.2f", mean);
	return 0;
}