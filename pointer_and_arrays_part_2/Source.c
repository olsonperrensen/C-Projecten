#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXWORD 3
#define MAXLETTER 15

void r(char [][MAXLETTER], int*, int*);
void p(char[][MAXLETTER], int*, int*);


int main(void)
{
	char a[MAXWORD][MAXLETTER];
	int flag_w = 1, flag_l = 1;
	r(a, &flag_w, &flag_l);
	p(a, &flag_w, &flag_l);
	return EXIT_SUCCESS;
}

void r(char a[][MAXLETTER], int* flag_w, int* flag_l)
{
	char dummy;
	printf("\n: ");
	for (int i = 0; i < MAXWORD; i++, (*flag_w)++)
	{
		for (int j = 0; j < MAXLETTER; j++, (*flag_l)++)
		{
			scanf("%c", &dummy);
			if (dummy == '.')
			{
				a[i][j] = dummy;
				return -1;
			}
			else if(dummy == ' ')
			{
				a[i][j] = dummy;
				break;
			}
			else
			{
				a[i][j] = dummy;
			}
		}
	}
}

void p(char a[][MAXLETTER], int* flag_w, int* flag_l)
{
	printf("\n\n\t\t\t");
	for (int i = 0; i < flag_w; i++)
	{
		for (int j = 0; j < flag_l; j++)
		{
			printf("%c", a[i][j]);
		}
	}
	printf("\n\n");
}