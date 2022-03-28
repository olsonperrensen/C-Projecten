#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	short int n;
	printf(":");
	scanf("%hd%*c", &n);
	printf("\n\t%hd\t%X", n, n);
	n >>= 12;
	printf("\n\t%hd\t%X", n, n);
	n = n&0x000f; // 0x000f is FFFF so only these will sum with AND.
	printf("\n\t%hd\t%X", n, n);
	return 0;
}