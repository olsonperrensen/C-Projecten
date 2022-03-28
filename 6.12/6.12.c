/*Symbol bar by Max Iturria*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw_bar(char, int);

int main(void)
{
	int num = 0; char sym = NULL;
	printf("What symbol would you like to use ? ");
	scanf("%c%*c", &sym);
	printf("Enter your scores: ");
	do {
		scanf("%d%*c", &num);
		draw_bar(sym, num);
	} while (num > 0);
}

void draw_bar(char symbol, int bars_needed)
{
	printf("score = %d\t\t", bars_needed);
	for (int i = 0; i < bars_needed; i++) // no need to write in main if statements, whatever goes below 1 will not pass through this loop.
	{
		printf("%c", symbol);
	}
	printf("\n");
}