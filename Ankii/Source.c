#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("a.txt", "w+");
	char c = 'A';
	int i = 0;
	for (i; i < 100; i++,c++)
	{
		fprintf(fp,"%d %c", i, c);
	}
	fflush(fp);
	fclose(fp);
	FILE* fp1 = fopen("a.txt", "r");
	while (fscanf(fp1, "%d %c", &i, &c)!=EOF)
	{
		printf(" %d %c \n", i, c);
	}
	return 0;
}