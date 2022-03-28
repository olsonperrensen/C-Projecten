#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp;
	char sym; 
	fp = fopen("t.txt","r");
	while ((sym = fgetc(fp)) != EOF)
	{
		printf("%c", sym);
	}
	return 0;
}