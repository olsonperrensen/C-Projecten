#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "12.1.h"

int main(void)
{
	Month month = Jan;
	printf("Current Month\t| Previous Month\n");
	for (int i = 0; i < 32; i++)
	{
		printf("-");
	}
	printf("\n");
	PrintMonth(month);
	return 0;
}
Month lastMonth(Month month)
{
	if (month != 0) month = month - 1;
	else month = 11;
	switch (month)
	{
	case 0:
		printf("January");
		break;
	case 1:
		printf("February");
		break;
	case 2:
		printf("March");
		break;
	case 3:
		printf("April");
		break;
	case 4:
		printf("May");
		break;
	case 5:
		printf("June");
		break;
	case 6:
		printf("July");
		break;
	case 7:
		printf("August");
		break;
	case 8:
		printf("September");
		break;
	case 9:
		printf("October");
		break;
	case 10:
		printf("November");
		break;
	case 11:
		printf("December");
		break;
	default:
		break;
	}
	printf("\n");
}
void PrintMonth(Month month)
{
	for (month; month <= Dec; month++)
	{
		switch (month)
		{
		case 0:
			printf("%15s", "January");
			break;
		case 1:
			printf("%15s", "February");
			break;
		case 2:
			printf("%15s", "March");
			break;
		case 3:
			printf("%15s", "April");
			break;
		case 4:
			printf("%15s", "May");
			break;
		case 5:
			printf("%15s", "June");
			break;
		case 6:
			printf("%15s", "July");
			break;
		case 7:
			printf("%15s", "August");
			break;
		case 8:
			printf("%15s", "September");
			break;
		case 9:
			printf("%15s", "October");
			break;
		case 10:
			printf("%15s", "November");
			break;
		case 11:
			printf("%15s", "December");
			break;
		default:
			break;
		}
		printf(" | ");
		lastMonth(month);
	}
}