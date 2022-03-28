#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int speed;
	printf("\nEnter your current speed...: ");
	scanf("%d", &speed);
	if (speed <= 65)
		printf("\nNo speeding Ticket\n\n");
	else
		printf("\nYou've received a speeding ticket\n\n");
	return 0;
}