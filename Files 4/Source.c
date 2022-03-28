#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXROW 10
#define MAXCOL 44
int main(void)
{
	int i = 0;
	FILE* fp = fopen("j.txt", "a+");
	char s[MAXROW][MAXCOL];
	while (i < MAXROW)
	{
		printf("\nEnter your sentence n. [%d] : ", i);
		gets(s[i]);
		i++;
	}
	i = 0;
	while (i < MAXROW)
	{
		fputs(s[i], fp);
		fputc('\n', fp);
		i++;
	}
	return 0;
}