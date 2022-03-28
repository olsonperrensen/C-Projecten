#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s[199] = {'h','i', '\0'};
	printf("%s", s);
	return 0;
}