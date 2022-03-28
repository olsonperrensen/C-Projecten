#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 7

float sum = 0, mean = 0;

float ReadTemp(float [], int);
float CalcMean(float);

int main(void)
{
	float temp[SIZE];
	sum = ReadTemp(temp, SIZE);
	mean = CalcMean(sum);
	printf("\nYour temperature's mean equals: %.2f\n\n\n", mean);
}

float ReadTemp(float temp[], int length) 
{
	for (int i = 0; i < length; i++)
	{
		printf("\nTemp of day %d: ", i+1);
		scanf("%f", &temp[i]);
		sum += temp[i];
	}
	return sum;
}

float CalcMean(float theSum)
{
	mean = sum / SIZE;
	return mean;
}