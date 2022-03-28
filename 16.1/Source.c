#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 50
int main(int argc, char* argv[])
{
	char s[LEN];
	if (argc == 1)
	{
		return -1;
	}
	FILE* fp0 = fopen(argv[1],"r");
	FILE* fp1 = fopen(argv[2], "w");
	if (fp0 == NULL || fp1 == NULL)
	{
		return -1;
	}
	while(fgets(s,LEN,fp0))
	{
		fprintf(fp1,"%s",s);
	}
	return 0;
}