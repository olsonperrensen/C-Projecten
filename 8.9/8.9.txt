#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10
#define MAXROW 3
#define MAXCOL 10
void r(char[]);
void rm_n_ch(char[], char[][MAXCOL], int);
void c(char[], char[], char[]);
void p(char[], char[], char[]);
int main(void)
{
	char a1[SIZE];
	char a2[SIZE];
	char a3[SIZE];
	char dummy[MAXROW][MAXCOL] = { '0' };
	printf(":");
	r(a1);
	r(a2);
	r(a3);
	rm_n_ch(a1,dummy,0);
	rm_n_ch(a2,dummy,1);
	rm_n_ch(a3,dummy,2);
	c(a1, a2, a3);
	p(a1, a2, a3);
	return 0;
}
void r(char a[])
{
	scanf("%s", a);
}
void rm_n_ch(char a[], char dummy[][MAXCOL], int rown) 
{
	strcpy(dummy[rown], a);
	int i = 0;
	while (a[i] != '\0')
	{
		//printf("hello world");
		if (a[i] != 39 && a[i] != 96)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] = a[i] - 32;
			}
		}
		else
		{
			a[i] = ' ';
		}
		i++;
	}
}
void c(char a1[], char a2[], char a3[])
{
	if (strcmp(a2, a1) == 1 && strcmp(a3, a2) == 1) // ideal-case
	{
		printf("\nNothing to change.");
	}
	else // reality
	{
		int ordered = 0;
		int counter = 0;
		char temp[SIZE];
		printf("\nWe've got some work to do... Let's go");
		while (ordered != 1)
		{
			if (counter < 10)
			{
				if (strcmp(a1, a2) == 1)
				{
					strcpy(temp, a1);
					strcpy(a1, a2);
					strcpy(a2, temp);
				}
				if (strcmp(a2, a3) == 1)
				{
					strcpy(temp, a3);
					strcpy(a3, a2);
					strcpy(a2, temp);
				}
				if (strcmp(a1, a2) == 1) // but what if they are in fact alphabetically ordered? while loop never exists.
				{
					strcpy(temp, a1);
					strcpy(a1, a2);
					strcpy(a2, temp);
					ordered = 1;
				}
				if (strcmp(a1, a2) == -1 && strcmp(a2, a3) == -1)
				{
					ordered = 1;
				}
			}
			else { // safety-measure in case of infinite loop.
				ordered = 1;
			}
			counter++;
		}
		
	}
}
void p(char a1[], char a2[], char a3[])
{
	printf("\n\n\t\t\tNow in order: %s %s %s\n\n", a1, a2, a3);
}