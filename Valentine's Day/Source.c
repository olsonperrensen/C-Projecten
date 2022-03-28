#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int repeat = 0;
	printf("How strong is your love 1-10?: ");
	scanf("%d", &repeat);
	printf("\nI love you very");
	while (repeat > 0 && repeat < 10)
	{
		printf("\n very");
		repeat--;
	}
	printf(" much.");
	return 0;
}