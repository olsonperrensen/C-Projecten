/*If you don't change it, don't use pointers.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header.h"
#include <stdlib.h>

int main(void)
{
	int d0, d1;
	Month myMonth0, myMonth1;
	read(&d0, &myMonth0);
	/*Traceback check*/
	if ((d0 > 31 || d0 < 0) || (myMonth0 > 12 || myMonth0 < 0))
	{
		printf("Please stay within a reasonable range.\n\n\n");
		exit(-1);
	}
	printf("The current day is: ");
	PrintDay(d0, myMonth0);
	NextDay(d0, &d1 ,myMonth0, &myMonth1);
	printf("\nThe next day is: ");
	PrintDay(d1, myMonth1);
	return 0;
}
void read(int* dp0, Month* mp0)
{
	int m_dummy;
	printf("Enter the current day and month (as integers): ");
	scanf("%d%d%*c", dp0, &m_dummy);
	*mp0 = (Month)m_dummy; // Sofie's way to do it.
	*mp0 -= 1;
}
void PrintDay(int d, Month myMonth)
{
	switch(myMonth)
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
	printf(" %d", d);
}
void NextDay(int d0, int* dp1, Month myMonth0, Month* mp1)
{
	if (d0 >= 28)
	{
		if (d0 == 31) // JAN, MAR, MAY, JUL, AUG, OCT, DEC
		{
			if (myMonth0 % 2 == 0 && myMonth0 < 7)
			{
				*dp1 = 1;
				*mp1 = myMonth0 + 1;
			}
		}
		else if (d0 == 30) // APR, JUN, SEPT, NOV 
		{
			if ((myMonth0 % 2 != 0 && (myMonth0 < 6 && myMonth0 > 1)) || (myMonth0 % 2 == 0 && myMonth0 > 7))
			{
				*dp1 = 1;
				*mp1 = myMonth0 + 1;
			}
			else
			{
				*dp1 = d0 + 1;
				*mp1 = myMonth0;
			}
		}
		else if (myMonth0 == 1)// FEB
		{
			*dp1 = 1;
			*mp1 = myMonth0 + 1;
		}
		else // not at the edge of the month.
		{
			*dp1 = d0+1;
			*mp1 = myMonth0;
		}
	}
	else if (d0 <= 27){
	*dp1 = d0 + 1;
	*mp1 = myMonth0;
	}
	return 0;
}