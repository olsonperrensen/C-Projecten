#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
Check if it works : https://www.charactercountonline.com/
*/

int main(void)
{
	char c = '0'; int symbol_counter = 0, e_counter = 0, space_counter = 0;
	printf("Enter your initial character: ");
	c = getchar();
	while (c != '\n')
	{
		if (c == 'e' || c == 'E')
		{
			e_counter++;
			symbol_counter++;
		}
		/*else if (c == '\n')
		{
			symbol_counter = symbol_counter;
		}*/
		else if (c == ' ')
		{
			space_counter++;
			symbol_counter++;
		}
		else
		{
			symbol_counter++;
		}
		c = getchar();
	}
	printf("\nTotal symbols: %d\tTotal e's: %d\t Total spaces: %d", symbol_counter, e_counter, space_counter);
	return 0;
}