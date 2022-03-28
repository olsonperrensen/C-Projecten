#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 101
int main(void)
{
	char players[LEN];
	int dangerousity = 0;
	char lastPlayer = '~';
	scanf("%s%*c",players);
	for (size_t i = 0; i < strlen(players); i++)
	{
		if (dangerousity > 6)
		{
			break;
		}
		if (lastPlayer == players[i])
		{
			dangerousity++;
		}
		else
		{
			dangerousity = 1;
		}
		if (players[i] == '0')
		{
			lastPlayer = players[i];
		}
		else
		{
			lastPlayer = players[i];
		}
	}
	if (dangerousity > 6)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}