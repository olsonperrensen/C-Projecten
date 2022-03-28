#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	int number;//sine;
	float sine;
	scanf("%d%*c",&number);
	sine = sin(number);
	if (sine < 0)
	{
		exit(-1);
	}
	else
	{
		printf("%f", sine);
	}
	return 0;
}