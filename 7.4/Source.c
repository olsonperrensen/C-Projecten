#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 7

void ReadTemp(int [], int);
void Calculate(int [], int[], int);
void PrintDays(int [], int);

int main(void)
{
	int user_temp[SIZE] = { 0 };
	int temp_array[SIZE] = { -1 };
	ReadTemp(user_temp, SIZE);
	Calculate(user_temp, temp_array, SIZE);
	PrintDays(temp_array, SIZE);
	printf("\n\n\n");
	return 0;
}

void ReadTemp(int a[], int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("\nEnter temp | Day [%d]:  ", i+1);
		scanf("%d%*c", &a[i]);
	}
}

void Calculate(int a[], int dummy[], int s)
{
	for (int j = 0; j < s; j++)
	{
		if (a[j] > 10)
		{
			dummy[j] = j+1;
		}
	}
}

void PrintDays(int dummy_filled[], int s)
{
	printf("\nDays >10 C:");
	for (int k = 0; k < s; k++)
	{
		//
		if (dummy_filled[k] > 0 ) printf("%2d", dummy_filled[k]);
	}
}