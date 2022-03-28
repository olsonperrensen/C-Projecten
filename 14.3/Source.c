#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXCOL 55
int main(void)
{
	char s[MAXCOL];
	FILE* fp0, * fp1;
	fp0 = fopen("IN.txt", "r");
	fp1 = fopen("OUT.txt", "w");
	while ((fgets(s, MAXCOL, fp0)) != NULL)
	{
		fputs(s, fp1);
		fputc('\n',fp1);
	}
	return 0;
}