#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXROWS 3
#define MAXSEATS 4
#define MAXLETTERS 10
void init(char[][MAXSEATS][MAXLETTERS]);
void ask(char[][MAXSEATS][MAXLETTERS]);
int main(void)
{
	char names[MAXROWS][MAXSEATS][MAXLETTERS];
	for (int i = 0; i < MAXROWS; i++)
	{
		for (int j = 0; j < MAXSEATS; j++)
		{
			strcpy(names[i][j], ".");
		}
	}
	printf("\nWelcome. The theater has 3 rows of 4 seats each.");
	init(names);
	ask(names);
	return 0;
}
void init(char a[][MAXSEATS][MAXLETTERS])
{
	printf("The current reservations are :\n\n");
	for (int i = 0; i < MAXROWS; i++)
	{
		for (int j = 0; j < MAXSEATS; j++)
		{
			printf("\t%s", a[i][j]);
		}
		printf("\n");
	}
}
void ask(char a[][MAXSEATS][MAXLETTERS])
{
	char dummy_name[111];
	int row;
	int seat;
	int taken_seats = 0;
	printf("\nEnter a new seat reservation: ");
	scanf("%s%d%d%*c", &dummy_name, &row, &seat);
	taken_seats++;
	while (taken_seats < MAXSEATS * MAXROWS && strncmp(dummy_name, "end", 3) != 0)
	{
		if (strlen(dummy_name) > MAXLETTERS || row > MAXROWS || seat > MAXSEATS) return;
		if (strncmp(a[row - 1][seat - 1], ".", 1) != 0)
		{
			printf("\nEnter a new seat reservation: ");
			scanf("%s%d%d%*c", &dummy_name, &row, &seat);
		}
		strcpy(a[row - 1][seat - 1], dummy_name);
		init(a);
		printf("\nEnter a new seat reservation: ");
		scanf("%s%d%d%*c", &dummy_name, &row, &seat);
		if (strncmp(a[row - 1][seat - 1], ".", 1) != 0)
		{
			printf("\n\t\tOccupied!\n\n");
			continue;
		}
		taken_seats++;
	}
	printf("\n-------------------------\nThe final reservations are :\n\n");
	for (int i = 0; i < MAXROWS; i++)
	{
		for (int j = 0; j < MAXSEATS; j++)
		{
			printf("\t%s", a[i][j]);
		}
		printf("\n");
	}
}