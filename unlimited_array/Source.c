#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	char* name;
	name = calloc(1, sizeof("Hello world"));
	strcpy(name, "Hello World");
	printf("%s", name);
	return 0;
}