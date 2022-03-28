#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute_sum_to_n(int);

int main() {
//	compute_sum_to_n(5);

	int userInput;
	printf("Your input: ");
	scanf("%d", &userInput);
	printf("%d", compute_sum_to_n(userInput));
	return 0;
}

int compute_sum_to_n(int n) {
	int sum = 0;
	for (; n > 0; n--)
		sum += n;
	return sum;
}