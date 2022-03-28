#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void r(double*, double*, double*);

int main(void)
{
	double num0 = 0;
	double num1 = 0;
	double num2 = 0;
	
	double* p0 = &num0;
	double* p1 = &num1;
	double* p2 = &num2;

	r(p0,p1,p2);
	printf("\nnum0 = %.2lf, num1 = %.2lf, num2= %.2lf\n\n", num0, num1, num2);
	return 0;
}

void r(double* p0, double* p1, double* p2)
{
	printf("\nGive me the value of num:");
	scanf("%lf%lf%lf%*c",p0,p1,p2);
}