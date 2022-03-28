#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, multi;
	printf("Enter an integer number: ");
	scanf("%d%*c", &num);
	printf("The table of multiplication of %d is:\n\n", num);
	for (int i = 1; i <= num; i++)
	{
		multi = num + i;
		printf("%d + %d = %d\n", i, num, multi);
	}
	printf("\n");
	return 0;
}