#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s;
	FILE *fp0, *fp1;
	fp0 = fopen("in.txt","r");
	fp1 = fopen("out.txt","w");
	while ((s = fgetc(fp0)) != EOF)
	{
		fputc(s,fp1);
	}
	return 0;
}