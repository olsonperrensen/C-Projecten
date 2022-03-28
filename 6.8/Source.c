#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int nr();

int main(void)
{
	int number;
	number = nr();
	if (number >= 0 && number <= 10) printf("\nThe number read is %d\n\n", number);
	else return -3;
}

int nr()
{
	int PLACEHOLDER;
	printf("\nGive me a nr: ");
	scanf("%d%*c", &PLACEHOLDER);
	return PLACEHOLDER;
}