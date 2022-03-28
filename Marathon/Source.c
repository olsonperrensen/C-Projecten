#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int miles = 26, yards = 385;
	double kilometers;

	kilometers = 1.60934 * (miles + yards / 1760.0);
	printf("\nA marathon is %lf kilometers.\n\n", kilometers);
	return 0;
}