#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 7

int main(void)
{
	int temp[SIZE];
	float day = 0.00;
	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter the temp of day %d:  ", i + 1);
		scanf("%f%*c", &day);
		if (day > 10)
		{
			temp[i] = day;
		}
	}
	printf("\nAll days with a temperature > 10 degrees C:");
	for (int j = 0; j < SIZE; j++)
	{
		if (temp[j] > 10) printf("\nday %d", j+1);
	}
	printf("\n\n");
	return 0;
}