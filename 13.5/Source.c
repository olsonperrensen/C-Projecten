#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define IS_CAPITAL(a) (a > 64 && a < 91 ? (1) : (0))
#define IS_SMALL(a) (a > 96 && a < 123 ? (1) : (0))
#define IS_LETTER(a) ((IS_CAPITAL(a) || IS_SMALL(a)) ? (1) : (0))
int main(void)
{
	printf("%d",IS_LETTER('Z'));
	printf("\n%d", IS_LETTER('z'));
	printf("\n%d", IS_LETTER('1'));
	return 0;
}