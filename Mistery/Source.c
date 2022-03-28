#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//for (int i = 0; i < 10; i++) printf("| %d \t\t\t\t\t\t %d \n", rand()%100 +1, rand());
	//printf("\n\n");
	//return 0;

	srand(time(NULL)); // passing NULL into time takes the current time of execution as the starting seed. Each execution will have a different seed.
	for (int i = 0; i < 10; i++)
	{
		printf("%d, ", rand()%100+1);
	}
}