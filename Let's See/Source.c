#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int miles, yards;
	double kilometers;

	printf("Please enter two numbers separated by space to represent your desired miles and yards (in that order):  ");

	if (scanf("%d", &miles) == 1 && scanf("%d", &yards) == 1) {
		kilometers = 1.609 * (miles + yards / 1760.0);
		printf("\nA marathon is %lf kilometers.\n", kilometers);
	}
	else {
		printf("Failed to read integer.\n");
	}
	return 0;
}