#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXCOL 55
int main(void)
{
	char s[MAXCOL]; int i = 0;
	char c;
	FILE* fp0, * fp1;
	fp0 = fopen("OUT.txt", "r");
	fp1 = fopen("NEWOUT.txt", "w");
	while ((c = fgetc(fp0)) != EOF)
	{
		if (c == '\n')
		{
			continue;
		}
		fputc(c,fp1);
	}
	return 0;
}