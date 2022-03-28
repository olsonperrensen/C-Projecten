#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float num = 0.00;
	printf("Enter a number between the range <-2 .. 4.5>: ");
	scanf("%f%*c", &num);
	while (num > 4.5 || num < -2)
	{
		printf("\nPlease, follow our rules. Re-enter a valid number [-2..4.5] this time: ");
		scanf("%f%*c", &num);
	}
	printf("\n%f\n\n\n", num);
	return 0;
}