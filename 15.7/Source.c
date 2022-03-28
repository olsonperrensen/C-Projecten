#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 50
int main(void)
{
	FILE* fp = fopen("coworker.txt","r");
	char s[LEN];
	if (fp == NULL)
	{
		return -1;
	}
	while (fgets(s,LEN,fp))
	{
		printf("Name: %s",s);
		fgets(s, LEN, fp);
		printf("\nAge: %s", s);
		fgets(s, LEN, fp);
		printf("\nSalary: % s", s);
		printf("\n\n");
	}
	return 0;
}