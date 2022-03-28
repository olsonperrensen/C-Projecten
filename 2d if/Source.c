#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXROW 2
#define MAXCOL 3

void populate(char[][MAXCOL]);
void check(char[][MAXCOL]);

int main(void)
{
	char names[MAXROW][MAXCOL] = { '\0' };
	populate(names);
	check(names);
	return 0;
}

void populate(char str[][MAXCOL])
{
	int alphabet = 97;
	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOL; j++, alphabet++)
		{
			if (i == 1 && j == 1)
			{
				str[i][j] = '\0';
			}
			else 
			{
				str[i][j] = alphabet;
			}
		}
	}
}

void check(char str[][MAXCOL])
{
	for (int i = 0; i < MAXROW; i++)
	{
		for (int j = 0; j < MAXCOL; j++)
		{
			if (str[i][j] == '\0')
			{
				printf("\n\n\t\tName %d at letter-position %d is empty. Not reading the rest of the array...\n", i, j);
				break;
			}
			else
			{
				printf("%c",str[i][j]);
			}
		}
	}
}