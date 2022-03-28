#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void)
{
	int num = 0;
	printf(": ");
	scanf("%d%*c", &num);
	
	printf("\n%d\n\n\n", num);
	return 0;
}