#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void)
{
	double num = 0;
	printf(": ");
	scanf("%lf%*c", &num);
	num = sqrt(num);
	printf("\n%lf\n\n\n", num);
	return 0;
}