#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* s;
	int stringsize;
	stringsize = sizeof("hello");
	printf("sizeof hello is %d\n", stringsize);
	s = malloc(stringsize); // cast not needed
	printf("string is %s\n", s);
	strcpy(s, "hello"); // third argument not needed
	printf("string is %s\n", s);
	free(s);
	printf("string is %s\n\n", s);
	return 0;
}