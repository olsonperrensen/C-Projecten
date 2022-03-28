#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TOLOWER(c) (((c) > 64 && (c) < 91) ? (c+32) : (c))
int main(void)
{
	char c = '1';
	printf("Enter characters, end with 0: ");
	while (c != '0')
	{
		scanf("%c", &c);
		printf(" %c ",TOLOWER(c));
	}
	return 0;
}