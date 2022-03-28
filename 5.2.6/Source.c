#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, res = 0;
	printf("Please enter five integer numbers: ");
	scanf("%d", &num);
	res -= num;
	scanf("%d", &num);
	res -= num;
	scanf("%d", &num);
	res -= num;
	scanf("%d", &num);
	res -= num;
	scanf("%d*c", &num);
	res -= num;
	printf("\nAll your numbers were substracted from each other. This is the result: %d\n\n\n", res);
	return 0;
}