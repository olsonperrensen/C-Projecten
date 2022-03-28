#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 50
int main(void)
{
	char s[LEN];
	int i = 0;
	FILE* fp = fopen("text.txt","r");
	while((fgets(s,LEN,fp)!=NULL))
	{
		printf("%d%s",i,s);
		i++;
	}
	return 0;
}