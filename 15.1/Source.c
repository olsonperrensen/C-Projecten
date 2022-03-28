#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 200
typedef struct { char name[LEN], firstname[LEN]; }Person;
#define MAXROW 5
#define MAXCOL 12
void readPerson(Person*);
void printPerson(Person*);
int main(void)
{
	char s[MAXROW][MAXCOL];
	Person son[5];
	readPerson(son);
	printPerson(son);
	return 0;
}
void readPerson(Person* PLACEHOLDER)
{
	for (size_t i = 0; i < MAXROW; i++)
	{
		printf("\nN [even] | F [odd] || [%d]: ", i);
		scanf("%s%s%*c", PLACEHOLDER[i].name, PLACEHOLDER[i].firstname);
	}
}
void printPerson(Person* PLACEHOLDER)
{
	for (size_t i = 0; i < MAXROW; i++)
	{
		printf("\n\t%s:%s\n", PLACEHOLDER[i].name, PLACEHOLDER[i].firstname);
	}
}