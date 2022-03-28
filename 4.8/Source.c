#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXNAMES 3
#define MAXLETTERS 20 
void r(char [][MAXLETTERS]);
int main(void)
{
	char str[MAXNAMES][MAXLETTERS];
	r(str);
	return 0;
}
void r(char str[][MAXLETTERS])
{
	printf("\nEnter name and first name: ");
	scanf("%s%s%s%*c", &str[0], &str[1], &str[2]);
	
}