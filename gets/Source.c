#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXROW 5
#define MAXCOL 10

int main(void)
{
	char names[MAXROW][MAXCOL]; //int reverse = 4; int lala;
	for (int i = 0; i < MAXROW; i++)
	{
		printf("Your name: ");
		scanf("%s%*c", names[i]); //If you use ONE dimentional array, you DONT need the address of operator
		//gets(lala);
	}
	printf("Your names were:\n");
	for (int k = MAXROW-1; k >= MAXROW; k--)
	{
		printf("\n%s", names[k]);
		//reverse--;
	}
	printf("\n\n");
	return 0;
}