#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 2501
int main(void) {
	char s[LEN];
	size_t pos0 = -1, pos1 = -1, back0 = -1, back1 = -1;
	int z = 0;
	int n;
	gets(s);
	n = strlen(s);
	for (size_t i = 0; i < strlen(s); i++)
	{
		for (size_t j = 0; j < strlen(s); j++)
		{
			if (s[i] == s[j] && i != j)
			{
				if ((i == pos1 && j == pos0)||(i == back1 && j == back0))
				{
					continue;
				}
				n--;
				back0 = pos0;
				back1 = pos1;
				pos0 = i;
				pos1 = j;
			}
		}
	}
	if (n % 2 == 1)
	{
		printf("IGNORE HIM!");
	}
	else
	{
		printf("CHAT WITH HER!");
	}
	return 0;
}