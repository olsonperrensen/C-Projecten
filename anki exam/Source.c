#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("t.txt","r");
	char c;
	while ((c = fgetc(fp)) != EOF)
	{
		printf("%c",c);
	}
	puts("\nHello world\n");
	putchar(c+66);
	return 0;
}