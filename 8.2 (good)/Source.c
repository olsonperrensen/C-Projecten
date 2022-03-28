#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNAMES 3
#define MAXLETTERS 10
#define MAXMAX 25

int main(void)
{
	char str[MAXNAMES][MAXLETTERS] = { '\0' }; // you can't fill character vars with integer values.
	char str_concat[MAXMAX] = { '\0' }; // use the sentinel instead
	for (int i = 0; i < MAXNAMES ; i++) // i will never be 3! If you do <= then you need to substract -1
	{
		printf("Enter name [%d]: ", i+1);
		gets(str[i]); // since it is a two-dimensional array you are required to give the starting row.
		strcat(str_concat,str[i]);
		strcat(str_concat, " ");
	}
	printf("\n%s\n\n", str_concat);	
	return EXIT_SUCCESS;
}