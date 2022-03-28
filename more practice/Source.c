#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c;
	FILE* fp = fopen("a.txt","r");
	while (fscanf(fp, "%c", &c) != EOF)
	{
		printf("%c",c);
	}
	return 0;
}