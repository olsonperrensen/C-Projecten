#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
int main(void) {
	//char s[5] = {0, 1, 2, 33, 4};
	//printf("%d", s[3]);

//	const int SIZE = 5;

	int grades[SIZE] = {78, 67, 92, 83, 88};

	double sum = 0.00, avg = 0.00;

	printf("\n My grades are:\n");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\t", grades[i]);
	}

	for (int i = 0; i < SIZE; i++)
	{
		sum += grades[i];
	}
	avg = sum / SIZE;
	printf("\n\nThe average of my grades is equal to %.2lf\n\n\n", avg);
	
	return 0;
}