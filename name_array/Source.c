#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXNAMES 2
#define MAXLETTERS 50
int main(void)
{
	char names[MAXNAMES][MAXLETTERS];
	int i = 0; //j = 0;
	char test[MAXLETTERS];
	printf("Enter your name: ");
	/*scanf("%s%*c", test);*/
	gets(test);
	while (test[0] != '\0' && i < MAXNAMES)
	{
		strcpy(names[i], test);
		if (i < MAXNAMES - 1)
		{
			printf("Enter your name: ");
			//scanf("%s%*c", test);
			gets(test);
		}
		i++; //j++;
	}

	for (int j = 0; j < MAXNAMES; j++)
		printf("%s\n", names[j]);
	return EXIT_SUCCESS;
}