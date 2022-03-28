#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRINGS 10
#define MAX_LETTERS 30
void ask(char [][MAX_LETTERS]);
void spit_out(char[][MAX_LETTERS]);
int main(void) {
	char list[MAX_STRINGS][MAX_LETTERS];
	ask(list);
	spit_out(list);
	return 0;
}
void ask(char array[][MAX_LETTERS])
{
	for (int i = 0; i < MAX_STRINGS; i++)
	{
		printf("\nEnter your name [%d]: ", i);
		gets(array[i]);
	}
}
void spit_out(char array[][MAX_LETTERS])
	{
		for (int i = 0; i < MAX_STRINGS; i++)
		{
			printf("\t%s", array[i]);
		}
	}