#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*Write a program that reads 2 names and prints them alphabetically.*/
#define SIZE 8
void r(char[]);
int c(char[], char[]);
int main(void)
{
	char a1[SIZE];
	char a2[SIZE];
	printf("\n:");
	r(a1);
	r(a2);
	int order = c(a1,a2);
	if (order == 0)
	{
		printf("\nBoth strings are equal: %s %s", a1, a2);
	}
	else if (order == 1)
	{
		printf("\nString1 was larger: %s %s (now ordered)", a2, a1);
	}
	else if (order == -1)
	{
		printf("\nString2 was larger: %s %s (left untouched)", a1, a2);
	}
	printf("\n\n");
 	return 0;
}
void r(char a[])
{
	scanf("%s%*c",a);
}
int c(char a1[], char a2[])
{
	int flag = strncmp(a1, a2, SIZE);
	return flag;
}