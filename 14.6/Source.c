#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 10
int main(void)
{
	char s0[LEN], s1[LEN], x, y;
	FILE *fp0, *fp1;
	fp0 = fopen("A.txt","r");
	fp1 = fopen("B.txt", "r");
	while (((x = fgets(s0,LEN,fp0)) != NULL) && ((x = fgets(s1, LEN, fp1)) != NULL))
	{
		printf("%s",s0);
		printf("%s", s1);
	}
	return 0; 
}