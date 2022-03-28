/*
Program that formats your raw total amount of seconds into nicely tied, human-readable concepts like a day, an hour, and so on.

Only one line was rethought based on a page's source code found publicly on the internet, explained further down
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int dd_default = 86400, hh_default = 3600, mm_default = 60, ss_default = 60;
	int dd = 0 , hh = 0, mm = 0, ss = 0;
	unsigned long lotsOfSec = 0;

	printf("Please, enter a large amount of seconds [Limit yourself up to ((2^32) - 1)]: ");
	scanf("%d%*c", &lotsOfSec);
	//printf("\nYou entered %lu\t", lotsOfSec);
	
	if (lotsOfSec > 0)
	{ 
		printf("\nYou will be given dd-mm-hh-ss \t Wait...");
		if (lotsOfSec >= 86400)
		{
			dd = (lotsOfSec / dd_default);
			hh = (lotsOfSec % dd_default)/3600;
			mm = (lotsOfSec % hh_default)/60;
			ss = (lotsOfSec % mm_default); // TO FIGURE OUT THIS ONE (only ss) AND NOT DUPLICATE THE MINUTES AS SECONDS, I TOOK A LOOK AT THE SOURCE CODE OF THE FOLLOWING PAGE: https://www.satsig.net/training/seconds-days-hours-minutes-calculator.htm
		}
		else if (lotsOfSec >= 3600)
		{
			hh = (lotsOfSec % dd_default) / 3600;
			mm = (lotsOfSec % hh_default) / 60;
			ss = (lotsOfSec % mm_default);
		}
		else if (lotsOfSec >= 60)
		{
			mm = (lotsOfSec % hh_default) / 60;
			ss = (lotsOfSec % mm_default);
		}
		else if (lotsOfSec < 60)
		{
			ss = (lotsOfSec % mm_default);
		}
		printf("\n\n\n\nYour %lu seconds are equivalent to = %d days %d hours %d minutes and %d seconds in total\n\n\n\n\n\n\n\n\n", lotsOfSec, dd, hh, mm, ss);
	
	}
	else
	{
		printf("You entered an invalid number");
		return -1;
	}
	return 0;
}