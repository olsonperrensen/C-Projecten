#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int digit;
	printf("Please enter a digit: ");
	scanf("%d%*c", &digit);

	switch (digit)
	{
		case 0:
			printf("\nYou have entered the digit zero\n\n\n");
			break;

		case 1:
			printf("\You have entered the digit none\n\n\n");
			break;

		case 2:
			printf("\nYou have entered the digit two\n\n\n");
			break;

		case 3:
			printf("\nYou have entered the digit three\n\n\n");
			break;

		case 4:
			printf("\nYou have entered the digit four\n\n\n");
			break;

		case 5:
			printf("\nYou have entered the digit five\n\n\n");
			break;

		case 6:
			printf("\nYou have entered the digit six\n\n\n");
			break;

		case 7:
			printf("\nYou have entered the digit seven\n\n\n");
			break;

		case 8:
			printf("\You have entered the digit eight\n\n\n");
			break;

		case 9:
			printf("\nYou have entered the digit nine\n\n\n");
			break;

		default:
			printf("\nThis is not just one digit... Try again.\n\n\n");
			break;
	}
	
	
	return 0;
}