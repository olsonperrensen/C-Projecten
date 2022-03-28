#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int today_day, today_month, today_year, bd_day, bd_month, bd_year, age, month = 0;
	printf("Today's DD/MM/YYYY: ");
	scanf("%d%d%d%*c", &today_day, &today_month, &today_year);
	printf("\nYour birthday's DD/MM/YYYY: ");
	scanf("%d%d%d%*c", &bd_day, &bd_month, &bd_year);

	// Month correction
	if (today_month < bd_month )
	{
		age = (today_year - bd_year) - 1;
		month = (today_month - bd_month) + 12;
	}
	else if (today_month == bd_month)
	{
		age = today_year - bd_year;
		month = 0;
	}
	else if (today_month > bd_month)
	{
		age = today_year - bd_year;
		month = today_month - bd_month;
		//if (month >= 12)
		//{
		//	age++;
		//}
	}

	// Day correction
	if (today_day == bd_day)
	{
		month = month;
	}
	else if (today_day < bd_day && today_month == bd_month)
	{
		age--;
		month = 11;
	}
	else if (today_day < bd_day && today_month < bd_month) // faulty
	{
		age--;
		month = (today_month - bd_month) + 12;
	}
	printf("\nYou are %d years old with %d months as of today.\n\n\n", age, month);
	return 0;
}