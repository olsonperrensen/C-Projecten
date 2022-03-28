#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int readnumber(int, int);

int main(void)
{
	printf("\n%d\n\n", readnumber(-44, 35));
}

int readnumber(int lower_boundary, int upper_boundary)
{
	int userNr;
	do {
		printf(":");
		scanf("%d%*c", &userNr);
	} while (userNr < lower_boundary || userNr > upper_boundary);
	return userNr;
}