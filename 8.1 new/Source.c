#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXNAMES 4
#define MAXLETTERS 50
int main(void)
{
	char names[MAXNAMES][MAXLETTERS];
	int i = 0; //j = 0;
	char test[MAXLETTERS];
	do {
		strcpy(names[i], test);
		printf("Enter your name: ");
		//scanf("%s%*c", test);
		gets(test);
		i++; //j++;
	} while (test[0] != '\0' && i < MAXNAMES);
	/*
	Half of the while is false (it is equal to the sentinel), and half is true. 
	BUT
	Because one of them is already false, the end result will actually be false.
	So the function exits.
	*/
	
	return EXIT_SUCCESS;
}