#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 7

void ReadTemp(float[]);
float CalcMean(float[]);

int main(void)
{
	float a[SIZE] = { 0 }, mean = 0;

	ReadTemp(a);
	printf("\n\t\t");
	mean = CalcMean(a);
	//printf("\n\nSum is %.2f", mean);
	printf("\n\nMean of the last %d days is is %.2f degrees Celsius", SIZE, mean/SIZE);
	printf("\n\n\n");
	return 0;
}

void ReadTemp(float a[])
{
	for (int k = 0; k < SIZE; k++)
	{
		printf("\n\nEnter temperature for day %d: ", k + 1);
		scanf("%f%*c", &a[k]);
		printf("\nYou entered: Day %d was %.2f degrees", k + 1, a[k]);
	}
}
float CalcMean(float a[])
{
	int mean = 0;
	for (int k = 0; k < SIZE; k++)
	{
		mean += a[k];
	}
	return mean;
}