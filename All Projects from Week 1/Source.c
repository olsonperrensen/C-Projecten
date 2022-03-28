#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int fahrenheit, celsius;
	printf("Please enter your desired Fahrenheit number: ");
	scanf("%d", &fahrenheit);
	celsius = (fahrenheit - 32) / 1.8;
	printf("The result of your %d Fahrenheit is %d Celsius", fahrenheit, celsius);
	return 0;
}