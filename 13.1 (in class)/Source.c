#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN(a,b) ((a) < (b) ? (a) : (b))
int main(void)
{
	int a = -9, b = 10;
	printf("The minimum of %d and %d = %d", a, b, MIN(a, b));
	return 0;
}