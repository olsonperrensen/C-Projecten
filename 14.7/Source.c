#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE* fp;
	char s[256], t[256], e[4];
	printf("Enter file name: ");
	gets(s);
	printf("Enter file extension: ");
	gets(e);
	strcat(s,".");
	strcat(s,e);
	printf("Enter your text: ");
	gets(t);
	if (fp = fopen(s, "w"))
	{
		printf("File has been created!");
		fputs(t,fp);
		printf("\nText has been written");
	}
	else
	{
		exit(-1);
	}
	if (fclose(fp))
	{
		printf("\nFile closed");
	}
	return 0;
}