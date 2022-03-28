#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	char s[64];
	scanf("%s", s);
	printf("%-32s", s);
	printf("some text");
	return 0;
}