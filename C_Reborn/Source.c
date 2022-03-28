// program to convert kilometers to miles. Maintained by admin. v1.0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


float miles_to_km(float n) 
{
	float miles = n * 1.609;
	printf("\n\tYour number %f is equivalent to %f miles\n\n", n, miles);
}


int main() {
	float userI;
	printf("Please choose a nr. : \n");
	scanf("%f", &userI);
	miles_to_km(userI);
	return 0;
}