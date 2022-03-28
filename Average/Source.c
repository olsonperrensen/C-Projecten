#include <stdio.h>

int main() {
	int a = 5, b = 7, c = 6;
	double average;
	printf("a = %d b = %d c = %d\n", a, b, c);
	average = (a + b + c) / 3.0;
	printf("The average of these three is %lf", average);
	return 0;
}