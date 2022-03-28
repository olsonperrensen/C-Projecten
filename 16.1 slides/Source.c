#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	int flag = 0;
	for (int i = 0; i < argc-1; i++)
	{
		if (i == 0) continue;
		if (strcmp(argv[i], argv[i + 1]) == -1)
		{
			flag = i;
		}
		else
		{
			flag = i+1;
		}
	}
	printf("The first name is %s",argv[flag]);
	return 0;
}