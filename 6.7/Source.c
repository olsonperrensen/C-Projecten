#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void sym(int, char);

int main(void)
{
	char c = 100;
	for (int i = 0; i < 50; i++)
	{
		sym(i, c);
		c += 3;
	}
	return 0;
}

void sym(int num_placeholder, char char_placeholder)
{
	srand(time(NULL));
	for (int k = 0; k < num_placeholder; k++)
	{
		printf("%c", char_placeholder + rand()%100);
	}
	printf("\n\n");
}