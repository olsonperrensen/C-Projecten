#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
int main() {

	//const int SIZE = 5;
	char grades[SIZE] = { 1,2,3,4,5 };
	double sum = 0.0;
	double *ptr_to_sum = &sum;
	int i;

	printf("\nMy grades are: \n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d\t", grades[i]);
		printf("\n\n");
	}
	for (i = 0; i < SIZE; i++)
	{
		sum += grades[i];
	}
		printf("\nMy average is %.2f\n\n", sum / SIZE);
		printf("\n\n");
	
	printf("sum is at %p, or %lu and is %lf", ptr_to_sum, &sum, *ptr_to_sum);
	printf("\n\nGrades are at %lu to %lu\n", grades, grades + 5);
	return 0;
}