#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int theLove(int counter) {
	
	for (counter; counter > 0; counter--)
	{ 
		printf("very \n");
	}
	printf(" much.\n\n");
}


int main() {
	int repeat;
	printf("How much do you love your wife (0-10) ?:  ");
	scanf("%d", &repeat);
	if (repeat <= 10 && repeat > 0) {
	printf("I love you very ");
	theLove(repeat);
	}
	else
	{
		printf("Whoops. You are out of range.");
	}
	return 0;
}