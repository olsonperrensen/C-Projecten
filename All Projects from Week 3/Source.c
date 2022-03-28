#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int outside, weather;
	printf("\nEnter if outside 1 true 0 false: ");
	scanf("%d", &outside);
	printf("\nEnter if rain 1 true 0 false: ");
	scanf("%d", &weather);
	if (outside && weather) printf("Please use an umbrella");
	else printf("\nDress normally.\n\n");
	return 0;
}