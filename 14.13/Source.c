#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 99
int main(void)
{
	FILE* fp0 = fopen("people.txt", "r");
	char s[LEN];
	while (fgets(s,LEN,fp0))
	{
		printf("%s",s);
	}
	return 0;
}