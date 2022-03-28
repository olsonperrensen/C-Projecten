#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	printf("\n%lf",M_PI);
	srand(time(NULL));
	for (int j = 0; j < 10; j++)
	{
		printf("\n\n%i\n\n", rand());
	}
	printf("%lf   %lf", floor(3.01), ceil(3.01));
	return 0;
}