#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float f = 3.14;
	int* p = (int*)&f;  // generally a bad idea!
	printf("%d\n", *p);
	//
	int x = 4;
	float y = 4.0;
	int* ptr = &x;

	x = x + 1;
	y = y + 1;
	ptr = ptr + 1;
}