#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
/*int num, sum = 0;
	for (int count = 0; count < 10; count++)
	{
		printf("Please enter a num: ");
		scanf("%d%*c", &num);
		sum += num;
	}
	printf("\nYour numbers combined give out %d as a result\n\n\n", sum);

	return 0;*/
	int num;
	printf("Choose one of the available options [1..42]:  ");
	scanf("%d%*c", &num);
	//while (num != 1 && num != 2 && num != 3 && num != 4)
	// check if the type is correct, otherwise if you type a 'char' it will go crazy
	while (num <= 0 || num >= 43) // WARNING: If I type 555, it cannot be less than zero and greater than 43 at the same time!!
	{
		printf("\n\n\n\n\nSorry. Your choice does not exist. Please enter a valid number and try again: ");
		scanf("%d%*c", &num);
	}
	printf("\n\n\n\tGreat choice. \t\t\n\tPreparing coffee...\n\n\n\n\n");
	return 0;
} 