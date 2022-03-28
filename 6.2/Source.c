#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void table(void);

int main(void)
{
	table();
}

void table(void)
{
	for (int j = 0; j <= 360; j+=30)
	{
		printf("%5d\t|", j);
		printf("%8.4lf\n", sin(j*M_PI/180));

	}
	printf("\n\n");
}

//Radians = Degrees × π / 180