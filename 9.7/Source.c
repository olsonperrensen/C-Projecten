#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 10
#define MAX_LETTERS 30
int ask(char[][MAX_LETTERS]);
void spit_out(char[][MAX_LETTERS], int);
int main(void) {
	char list[MAX_STRINGS][MAX_LETTERS];
	int effective_length;
	effective_length = ask(list);
	spit_out(list, effective_length);
	return 0;
}
int ask(char array[][MAX_LETTERS])
{
	int i = 0, terminate;
	printf("\nEnter your name [%d]: ", i);
	gets(array[i]);
	terminate = strncmp("end\0", array[i], 4);
	i++;
	while (terminate != 0 && i < MAX_STRINGS)
	{
		printf("\nEnter your name [%d]: ", i);
		gets(array[i]);
		terminate = strncmp("end\0", array[i], 4);
		i++;
	}
	return i;
}
void spit_out(char array[][MAX_LETTERS], int effective_length)
{
	for (int i = 0; i < effective_length; i++)
	{
		printf("\t%s", array[i]);
	}
}