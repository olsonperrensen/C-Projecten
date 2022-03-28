#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define length 2
char* words[length] = { "Hello","World" };
int main(void)
{
	//char num[] = "Hello world";
	//char* p = num;
	//printf("%s %c %x %x %x %x: ", num, num[10], num, &num, &num[0], p);

	char* pc;
	char** ppc;
	
	for (int j = 0; j < length; j++)
		{
		printf("%s ", words[j]);
		}
	ppc = words;
	printf("\n");
	for (int k = 0; k < length; k++)
	{
		ppc = words + k;
		pc = *ppc;
		while (*pc != 0)
		{
			printf("%c ", *pc);
			pc += 1;
		}
		printf("\t");
	}
	return 0;
}