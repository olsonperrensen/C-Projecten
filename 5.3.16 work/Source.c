/*
 * This code is one of the exercises of the course C Introduction to Programming
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int wide, block_counter;	//wide defined by the user and block counter
	char square = 219, space = 32, answer;	// square, space and answer (y/n) characters

	printf("This program builds a tower upside down!\n");

	do
	{
		printf("\n");
		block_counter = 0;	// we start to build the tower at level zero
		printf("How wide should the tower be?\n");
		printf("(enter an odd number between 3 and 15)\n");
		scanf("%d%*c", &wide);

		while (wide < 3 || wide > 15 || wide % 2 == 0)	// check if the user input is correct
		{
			printf("(enter an odd number between 3 and 15)\n");
			scanf("%d%*c", &wide);
		}

		/* Here we start to build a tower */
		while (wide >= 1)
		{
			/* Here we start to build a block of squares */
			for (int i = 0; i < wide * wide; i++)	// square numbers in a tower block = wide*wide 
			{
				if (i % wide == 0)		// if the number of squares is multiple of wide, then 
				{
					printf("\n");		// goes to the next line
					/* Depending on the tower level we print spaces*/
					for (int i = block_counter; i > 0; i--)
					{
						printf("%c", space);
					}
				}
				printf("%c", square);	// prints the brick of the tower (square)
			}
			/* After a single block is finished, we update wide of tower and level_counter: */
			wide = wide - 2;
			block_counter++;
		}

		printf("\n");
		printf("Do you want to build another tower? (y/n) ");
		scanf("%c%*c", &answer);

		while (answer != 'n' && answer != 'y')	// check if the user answer is correct
		{
			printf("\nPlease answer only with \'y\' for yes or \'n\' for no: ");
			scanf("%c%*c", &answer);

		}

	} while (answer == 'y');	// if yes repeats the process all over again

	return 0;
}