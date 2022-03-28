#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_divisors(int n)
{
	int iteration = 1;
	int sum = 0;
	if (n == 0)
	{
		return 0;
	}
	while (iteration<n)
	{
		if ((n%iteration) == 0)
		{
			sum += iteration;
		}
		iteration++;
	}
	return sum;
}

int main(void)
{
	int result = sum_divisors(102);
	printf("%d",result);
	return 0;
}