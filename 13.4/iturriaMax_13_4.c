#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define IS_CAPITAL(a) (a > 64 && a < 91 ? (1) : (0))
#define IS_SMALL(a) (a > 96 && a < 123 ? (1) : (0))

int main(void)
{
	printf("%d", IS_CAPITAL('A'));
	printf("\n%d", IS_SMALL('A'));
	return 0;
}