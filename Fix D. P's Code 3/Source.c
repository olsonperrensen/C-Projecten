#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
	double interval;
	int i;
	for (i = 0; i < 30; i++)
	{
		interval = i / 10.0;
		printf("sin(% lf) = % lf \t", interval, fabs(sin(interval))); // abs doesn't get the absolute value of a floating point, fabs does
	}


	printf("\n++++++ + \n");
	return 0;
}