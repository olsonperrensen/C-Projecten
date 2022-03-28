#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float y(float);

int main(void)
{
	for (float k = -5; k <= 5; k += 0.5)
	{
		printf("%.1f\t|", k);
		printf("%8.1f\n", y(k));
	}
}

float y(float PLACEHOLDER)
{
	float y = (2 * (PLACEHOLDER * PLACEHOLDER)) + (2 * (PLACEHOLDER - 3));
	return y;
}