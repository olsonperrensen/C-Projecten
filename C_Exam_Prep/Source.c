#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int s(int);
int main(void)
{
	int num1 = 0, num2 = 0, intquo, rem;
	float quo;
	printf(": ");
	num1 = s(num1);
	num2 = s(num2);
	intquo = num1 / num2;
	quo = (float)num1 / num2;
	rem = num1 % num2;
	printf("%d\t%d\t%d\t%d\t%.2f\n\n\n",num1, num2, intquo, rem, quo);
	printf("%d\t%d\t%d\t%d\t%.20f\n\n\n", num1, num2, intquo, rem, quo);
	return 0;
}
int s(int n)
{
	int f;
	for (int i = 0; i < 1; i++)
	{
		scanf("%d%*c", &f);
	}
	return f;
}