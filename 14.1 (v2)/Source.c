#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXCOL 55

int main(void)
{
	char s[MAXCOL];
	FILE* fp = fopen("a.txt","r");
	while ((fgets(s, MAXCOL, fp)) != NULL)
	{
		printf("%s",s);
	}
	return 0;
}