#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 50
int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		return -1;
	}
	FILE* fp0 = fopen(argv[1],"r");
	FILE* fp1 = fopen(argv[2], "r");
	int diff = -22, counter = 0;
	char s0[LEN], s1[LEN];
	if (fp0 == NULL || fp1 == NULL)
	{
		return -1;
	}
	while (fgets(s0,LEN,fp0) && fgets(s1,LEN,fp1))
	{
		if (counter > 9)
		{
			break;
		}
		if (strcmp(s0,s1) == NULL)
		{
			diff = 0;
		}
		else
		{
			printf("Files differ:\n\tFile %s: \"%s\"\n\tFile %s: \"%s\"\n",argv[1],s0,argv[2],s1);
			counter++;
			diff = 1;
		}
	}
	if (diff == 0 && counter == 0)
	{
		printf("\nBoth files are identical.");
	}
	return 0;
}