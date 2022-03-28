#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ranPrint(int, char);

int main(void)
{
	ranPrint(12, '$');
	ranPrint(2, '#');
	ranPrint(55, '"');
}

void ranPrint(int NR, char CH)
{
	for (int j = 0; j < NR; j++)
	{
		printf("%c", CH);
	}
	printf("\n\n");
}