#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int friend = 0, five_steps = 0, four_steps = 0, three_steps = 0, two_steps = 0; 
	int one_steps = 0, total_steps = 0;

	scanf("%d%*c",&friend);
	
	while (friend != 0)
	{

		/* Exact matches
		if (friend%5==0)
		{
			total_steps += (friend/5);
			friend %= 5;
			break;
		}
		else if (friend % 4 == 0)
		{
			total_steps += (friend / 4);
			friend %= 4;
			break;
		}
		else if (friend % 3 == 0)
		{
			total_steps += (friend / 3);
			friend %= 3;
			break;
		}
		else if (friend % 2 == 0)
		{
			total_steps += (friend / 2);
			friend %= 2;
			break;
		}
		else if (friend % 1 == 0)
		{
			total_steps += (friend / 1);
			friend %= 1;
			break;
		}*/
		
		// Unprecise matches
		if (friend >= 5)
		{
			five_steps = friend / 5;
			friend %= 5;
		}
		if (friend >= 4)
		{
			four_steps = friend / 4;
			friend %= 4;
		}
		if (friend >= 3)
		{
			three_steps = friend / 3;
			friend %= 3;
		}
		if (friend >= 2)
		{
			two_steps = friend / 2;
			friend %= 2;
		}
		if (friend >= 1)
		{
			one_steps = friend / 1;
			friend %= 1;
		}
		
		total_steps += five_steps + four_steps + three_steps + two_steps + one_steps;
	}
	printf("%d",total_steps);
	return 0;
}