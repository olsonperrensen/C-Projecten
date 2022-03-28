#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int x = sizeof("Hello world");
	int y = strlen("Hello world");

	char str1[15];
	char str2[15];
	int ret;


	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret = strcmp(str1, str2);

	return 0;
}