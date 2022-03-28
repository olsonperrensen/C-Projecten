#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, gcd = 0, old_num1 = 0, old_num2 = 0;
	printf("Enter 2 positive integer numbers: ");
	scanf("%d%d%*c", &num1, &num2);
	old_num1 = num1; old_num2 = num2;
	printf("\n%d\t%d\n", num1, num2);
	for (int i = 0; num1 != num2; i++)
	{
		if (num1 > num2) num1 = (num1 - num2);
		else num2 = (num2 - num1);
		gcd = num1;
		printf("\n%d\t%d\n", num1, num2);
	}
	printf("\nThe gcd of %d and %d equals %d.\n\n", old_num1, old_num2, gcd);
	return 0;
}