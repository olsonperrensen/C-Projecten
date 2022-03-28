/*Simple square drawing by Max Iturria*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void empty_square(void);
void filled_square(void);

int main(void)
{
	int userChoice;
	MAKECHOICE:printf("Make your choice: \n 1. Draw an empty square\n 2. Draw a filled square\n 3. Stop\n\t\t\t: ");
	scanf("%d%*c", &userChoice);
	switch (userChoice)
	{
	case 1:
		empty_square();
		goto MAKECHOICE;
		break;
	case 2:
		filled_square();
		goto MAKECHOICE;
		break;
	case 3:
		printf("\nThanks for playing with us!");
		break;
	default:
		while (userChoice != 1 && userChoice != 2 && userChoice != 3)
		{
			printf("Enter a valid choice: 1, 2 or 3!\n\n");
			goto MAKECHOICE;
		}
		break;
	}
	printf("\n\n\n");
	return 0;
}

void filled_square(void)
{
	char c = 219;
	for (int i = 0; i < 10; i++)
	{
		printf("%c%c", c, c);
		for (int j = 0; j < 1; j++)
		{
			for (int k = 0; k < 20; k++)
			{
				printf("%c", c);
			}
			printf("%c%c\n", c, c);
		}
	}
}

void empty_square(void)
{
	char c = 219;
	char c2 = ' ';
	for (int i = 0; i < 10; i++)
	{
		if (i == 9 || i == 0)
		{
			printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c, c);
		}
		else
		{
			printf("%c%c", c, c);
			for (int j = 0; j < 1; j++)
				{
					for (int k = 0; k < 20; k++)
					{
						printf("%c", c2);
					}
					printf("%c%c\n", c, c);
				}
		}
	}
}