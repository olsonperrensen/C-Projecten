/*Very simple program converting numbers into table-based floats*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float n0, n1, n2, n3, n4, n5;
	printf("Enter 6 integer numbers [0..999]: ");
	scanf("%f%f%f%f%f%f%*c", &n0, &n1, &n2, &n3, &n4, &n5);
	if ((n0 <= 999 && n1 <= 999 && n2 <= 999 && n3 <= 999 && n4 <= 999 && n5 <= 999) && (n0 > 0 && n1 > 0 && n2 > 0 && n3 > 0 && n4 > 0 && n5 > 0))
	{
		printf("\n\n-----------------------------------------------\n|\t%11.3f\t|\t%11.3f   |\n-----------------------------------------------\n|\t%11.3f\t|\t%11.3f   |\n-----------------------------------------------\n|\t%11.3f\t|\t%11.3f   |\n-----------------------------------------------\n\n\n\n\n\n", n0, n1, n2, n3, n4, n5);
	}
	else
	{
		printf("Wrong input. Please try again.");
	}
	return 0;
}