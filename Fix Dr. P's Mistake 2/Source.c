#define _CRT_SECURE_NO_WARNINGS // I need to use this in order to please Visual Studio's warnings
#include <stdio.h>
#define PI 3.14159

int main(void) {

	double radius;

	printf("Enter radius : ");

	if (scanf("%lf", &radius) == 1) { // here as well by using an if statement visual studio throws no warnings at ignoring the return value of scanf()
		printf("volume is : %lf cubic centimeters\n\n ", 4 * radius * radius * radius / 3.0 * PI); // Added PI to the formula in order to get the correct result
	}
	else {
		printf("Something went wrong. Please enter a valid number.\n");
	}
	return 0;
}