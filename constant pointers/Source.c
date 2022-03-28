#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 4;
	int b = 8;
	
	int* const p = &a; // a constant pointer to an int
	int const* p2; // a pointer to a constant int
	p = &b;
	return 0;
}