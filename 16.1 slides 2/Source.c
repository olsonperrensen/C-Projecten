#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int sum = 0;
	float avg;
	if (argc == 1)
	{
		return -1;
	}
	for (int i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("the sum = %d and the average = %.1f",sum,avg=(float)sum/(argc-1));
	return 0;
}