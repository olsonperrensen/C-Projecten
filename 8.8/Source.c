#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10
void r(char[]);
void c(char[], char[], char[]);
void p(char[], char[], char[]);
int main(void)
{
	char a1[SIZE];
	char a2[SIZE];
	char a3[SIZE];
	printf(":");
	r(a1);
	r(a2);
	r(a3);
	c(a1,a2,a3);
	p(a1, a2, a3);
	return 0;
}
void r(char a[])
{
	scanf("%s",a);
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
		char temp[SIZE];
		printf("\nWe've got some work to do... Let's go");
		while(ordered != 1)
		{ 
		if (strcmp(a1, a2) == 1)
		{
			strcpy(temp, a1);
			strcpy(a1,a2);
			strcpy(a2, temp);
		}
		if (strcmp(a2, a3) == 1)
		{
			strcpy(temp, a3);
			strcpy(a3, a2);
			strcpy(a2, temp);
		}
		if (strcmp(a1, a2) == 1)
		{
			strcpy(temp, a1);
			strcpy(a1, a2);
			strcpy(a2, temp);
			ordered = 1;
		}
		}
	}
}
void p(char a1[], char a2[], char a3[])
{
	printf("\n\n\t\t\tNow in order: %s %s %s\n\n", a1, a2, a3);
}