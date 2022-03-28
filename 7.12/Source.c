#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define SIZE 10
int main(void)
{
	int i = 0, temp, swap;
	int goals[SIZE];
	for (int j = 0; j < SIZE; j++)
	{
		goals[j] = rand() % 25 + 1;
		printf("Original list: %d\n", goals[j]);
	}

	while (i < SIZE)
	{
		//swap = 0;
		for(i; i < SIZE-1; i++) // stops at last comparison
		{
			if (goals[i] > goals[i + 1])
			{
				temp = goals[i]; // SAVE high-num
				goals[i] = goals[i + 1];
				goals[i + 1] = temp; // high-num OK order
				//swap = 1; // flag we had to swap = list not in order
			}
		}
		/*if (swap == 0)
		{ 
			break;
		}*/
	}
	printf("\n\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("Sorted list: %d\n", goals[i]);
	}
	return EXIT_SUCCESS;
}