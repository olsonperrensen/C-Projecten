#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 200
typedef struct { int day; char month[LEN]; int year; }Date;
typedef struct { char name[LEN], firstname[LEN]; Date dateOfBirth, enrollmentDate; }Person;
#define MAXROW 2
#define MAXCOL 12
void readPerson(Person*);
void readDate(Date*);
void printPerson(Person);
void printDate(Date);
int main(void)
{
	char s[MAXROW][MAXCOL];
	Person son[MAXROW];
	for (size_t i = 0; i < MAXROW; i++)
	{
		readPerson(&son[i]);
	}
	for (size_t i = 0; i < MAXROW; i++)
	{
		printPerson(son[i]);
	}
	return 0;
}
void readPerson(Person* PLACEHOLDER)
{
	printf("\nLast and Firstname: ");
	scanf("%s%s%*c", PLACEHOLDER->name, PLACEHOLDER->firstname);
	readDate(&(PLACEHOLDER->dateOfBirth));
	readDate(&(PLACEHOLDER->enrollmentDate));
}
void readDate(Date* DATEHOLDER)
{
	printf("\nDay, Month and Year: ");
	scanf("%d%s%d%*c", &(DATEHOLDER->day), DATEHOLDER->month, &(DATEHOLDER->year));
}
void printPerson(Person PLACEHOLDER)
{
	printf("\n\t%s:%s ", PLACEHOLDER.name, PLACEHOLDER.firstname);
	printDate(PLACEHOLDER.dateOfBirth);
	printDate(PLACEHOLDER.enrollmentDate);
}
void printDate(Date DATEHOLDER)
{
	printf("~~%d/%s/%d~~\n", DATEHOLDER.day, DATEHOLDER.month, DATEHOLDER.year);
}