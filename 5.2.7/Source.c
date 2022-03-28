#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int spd, lmt; float fine = 100.00;
	printf("Be aware! Speeding is heavily fined!");
	printf("\nYour current speed: ");
	scanf("%d%*c", &spd);
	printf("\nYour country's speed limit: ");
	scanf("%d%*c", &lmt);
	if (spd > lmt)
	{
		printf("\nYour speed is %d km/h over the speed limit. \n\nFine of U$D %.2f\n\n\n", (spd-lmt), (fine + ((spd-lmt)*2.5)));
	}
	else
	{
		printf("\nYou got spared...\n\n\n");
	}

return 0;
}