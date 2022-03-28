#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX2(a,b) ((a) > (b) ? (a) : (b))
int main(void)
{
	int a = 20, b = 10, c = -5;
	printf("The maximum of %d, %d and %d = %d", a, b, c, MAX2(MAX2(a,b),c));
	return 0;
}