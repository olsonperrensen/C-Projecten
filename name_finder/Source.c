#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXROW 50
#define MAXCOL 20

int readList(char a[][MAXCOL]);
void readName(char a[]);
int find(char a[][MAXCOL], char b[], int length);

int main(void)
{
	char matrix[MAXROW][MAXCOL];
	char name[MAXCOL];
	int size;
	int flag;
	size = readList(matrix);
	readName(name);
	flag = find(matrix,name,size);
	if (flag == 1)
	{
		printf("\n\nYour name was found");
	}
	else
	{
		printf("\nNo matches were found");
	}
	printf("\n\n");
	return 0;
}
int readList(char a[][MAXCOL])
{
	int i = 0;
	char test[MAXCOL];
	printf("Enter your name [%d]: ", i);
	gets(test);
	while (test[0] != '\0' && i < MAXROW)
	{
		strcpy(a[i], test);
		printf("Enter your name [%d]: ", ++i);
		gets(test);
	}
	return i;
}
void readName(char a[])
{
	printf("\nEnter the name to find: ");
	gets(a);
}
int find(char a[][MAXCOL], char b[], int length)
{
	int found = 0;
	for (int i = 0; i < length; i++)
	{
		if (strncmp(a[i], b, MAXCOL) == 0)
		{
			if (i == 1)
			{
				printf("\n\t\tYour name is stored at the %d-st place", i);
			}
			else if (i == 2)
			{
				printf("\n\t\tYour name is stored at the %d-nd place", i);
			}
			else if (i == 3)
			{
				printf("\n\t\tYour name is stored at the %d-rd place", i);
			}
			else
			{
				printf("\n\t\tYour name is stored at the %d-th place", i);
			}
			found = 1;
			return found;
		}
	}
	return found;
}