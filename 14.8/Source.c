#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 420
int main(void)
{
	FILE* fp = fopen("m.txt","r");
	char s[LEN];
	int i = 0;
	do
	{
		i++;
		while (fgets(s, LEN, fp) && i%21 != 0)
		{
			printf("%d | %s", i, s);
			i++;
		}
		printf("\n\n\tPress ENTER to continue... \n");
	} while (getchar() == '\n');

	return 0;
}