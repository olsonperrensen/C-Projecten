#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN(a,b) ((a) < (b) ? (a) : (b))
int main(void)
{
	int num0 = 66, num1 = 2;
	printf("%d", MIN(num0,num1));
	return 0;
}