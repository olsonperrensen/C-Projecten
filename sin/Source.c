/*
Write a program that can give the sine of a value between 0 and 1 (non inclusive). 
You will be graded based on whether the program can output a value in the correct range and 
whether your code is well-formatted and logically correct.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	double num = 0, newnum;
	printf(": ");
	scanf("%lf%*c", &num);
	newnum = sinf(num);
	printf("\n%lf\n\n\n", newnum);
	return 0;
}