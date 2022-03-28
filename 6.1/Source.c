#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void)
{
	double j = 0;
	printf(": ");
	scanf("%lf%*c", &j);
	j = sin(j * M_PI / 180);
	printf("\n%lf\n\n\n", j);
	return 0;
}