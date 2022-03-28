#define _CRT_SECURE_NO_WARNINGS // This bypasses Visual Studio's warning about using scanf
#include <stdio.h> // Standard IO library
#include <math.h> // Math library required for the sin() function

int main() {

	double userInput, theScan, theSine;

	printf("Please enter a float value between zero and 0.99: ");

	theScan = scanf("%lf", &userInput);

	if (theScan) // Insipred by earlier code of mine in another language, this means if this variable "exists" with some value or returns 1, then proceed
	{
		if (userInput >= 0 && userInput < 1) { // range between 0.00 and 0.99 as asked (&& works as AND in order for the two conditions I wrote to evaluate to true)
			theSine = sin(userInput); // Calculate the sine in radians of whatever value the user gave
			printf("You chose %lf as a number and your Sine is equal to %lf", userInput, theSine);
		}

		else {
			printf("Something went wrong. Please reconsider your number and come back.");
		}
	}
	return 0;
}