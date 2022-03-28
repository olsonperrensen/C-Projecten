#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void c(int*, int*, int*, int*);
int main(void)
{
	int n, h, m, s;
	printf("Enter a time in seconds :");
	scanf("%d%*c", &n);
	c(&n, &h, &m, &s);
	printf("\nThe entered time of %d seconds equals %d hours, %d minutes and %d seconds.", n, h, m, s);
	return 0;
}
void c(int* n, int* h, int* m, int* s)
{
	int temp = *n;
	*h = temp/(60*60);
	temp %= (60 * 60);
	*m = temp/60;
	temp %= 60;
	*s = temp;
}