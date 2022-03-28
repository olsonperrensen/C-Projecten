#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <stdio.h>

int main(void)
{
	assert(EOF == -1);
	int num = 0;
	printf(": ");
	scanf("%d%*c", &num);

	printf("\n%d\n\n\n", num);
	return 0;
}