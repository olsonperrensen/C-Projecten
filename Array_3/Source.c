#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[5] = { 0 }, num2[5] = { 0 };
	printf("Enter your desired nr.: ");
	readArray();
	scanf("%d%*c", &num);

	printf("\n%d\n\n\n", num);
	return 0;
}