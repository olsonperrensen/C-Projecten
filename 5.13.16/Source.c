#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c = 219, userCharChoice; short int userNrChoice = 0;

	TOWER:printf("\n                                                  _\n  __                   ___                       ( )\n |\"\"|  ___    _   __  |\"\"\"|  __                   `\n |\"\"| |\"\"\"|  |\"| |\"\"| |\"\"\"| |\"\"|        _._ _\n |\"\"| |\"\"\"|  |\"| |\"\"| |\"\"\"| |\"\"|       (__((_(\n |\"\"| |\"\"\"|  |\"| |\"\"| |\"\"\"| |\"\"|      \'-:--:-.\n \"'''\"''\"'\"\"'\"\"\"''\"''''\"\"\"'\"\"'\"\"'~~~~~~'-----'~~~~");
	printf("\nThis program builds a tower upside down! How wide should the tower be? (enter an odd number between 3 and 15)\n");
	if (scanf("%hd%*c", &userNrChoice))
	{
		if (userNrChoice % 2 == 1 && userNrChoice <= 15 && userNrChoice >= 3)
		{
			for (int i = 0; i < userNrChoice; i++)
			{
				printf("%c", c);
			}
			while (userNrChoice != 1)
			{
			userNrChoice -= 2;
			printf("\n");
			for (int i = 0; i < userNrChoice; i++)
			{
				printf("%c", c);
			}
			}
			printf("\nDo you want to build another tower? (y/n) ");

			scanf("%c%*c", &userCharChoice);

			switch (tolower(userCharChoice))
			{
			case 'y':
				printf("\nyes\n");
				goto TOWER;
				break;
			case 'n':
				printf("\nno\n");
				break;
			default:
				printf("\nI take that as yes!\n");
				goto TOWER;
				break;
			}
		}
	
	}
	return 0;
}