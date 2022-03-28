#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 99
int main(void)
{
	FILE* fp0 = fopen("people.txt","r");
	char s[LEN];
	char se[LEN];
	int flag = 0;
	printf("Enter the name of the person you want to find: ");
	scanf("%s",s);
	while((fscanf(fp0,"%s",se))!=EOF)
	{
		if (strcmp(se, s) == 0)
		{
			printf("\nname: %s\n", se);
			fgets(se,LEN,fp0); // Example had a \n so I need to skip it....
			fgets(se, LEN, fp0);
			printf("%s",se);
			flag = 1;
		}
	}
	if (flag)
	{
		printf("\n\tYour name [%s] was found!\n",s);
	}
	else
	{
		printf("\nWe couldn't find your name...\n");
	}
	return 0;
}