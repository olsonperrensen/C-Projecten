#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void easy(int); // declared OUTSIDE of main()

int main(void)
{
	//double num = 0;
	//printf(": ");
	//scanf("%lf%*c", &num);
	//num = sqrt(num);
	//printf("\n%4.2lf\n\n\n", num);
	//return 0;
	srand(time(NULL));

	int counter = 0;
	for (int j = 0; j < 5; j++)
	{
		counter += ((rand()%100)-28)+1;
		easy(counter);
	}
}

void easy(int PLACEHOLDER)
{
	char c = 129;

	

	for (int i = 0; i < PLACEHOLDER; i++)
	{
		printf("%c", c);
	}

	printf("\n\n");
}