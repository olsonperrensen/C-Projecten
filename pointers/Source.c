#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>

int main(void)
{
	float a[SIZE] = {11, 22, 33, 44, 55};
	long* p = &a;
	//printf("Decide the five values of a: ");
	//scanf("%d%d%d%d%d%*c", a[0], a[1], a[2], a[3], a[4]);
	printf("The raw values of a are: \n%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", a[0], a[1], a[2], a[3], a[4]);
	printf("'a' is located at address: \n%p\n", p);
	printf("'a' is located at address (this time in unsigned long): \n%lu\n", p);
	printf("The array 'a' ends its space reservation at address: \n%lu\n", a+SIZE); //bc er zijn 5 nrs binnen de array
	//printf("The dereferenced version of my pointer points out to the inner-value: \n%d\n\n", *p); // works fine with simple int var
	return 0;
}