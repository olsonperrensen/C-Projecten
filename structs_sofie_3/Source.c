#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 50
typedef struct {
	int day;
	char month[LEN];
	int year;
}Date;
typedef struct {
	char name[LEN];
	char lname[LEN];
	Date DateOfBirth;
}Person;
void readDate(Date*);
void printDate(Date*);
int main(void)
{
	Person myPerson;
	Date* ppp = &(myPerson.DateOfBirth);
	readDate(ppp);
	printDate(ppp);
	return 0;
}
void readDate(Date* ppp)
{
	printf(":");
	scanf("%d%s%d", &(ppp->day), ppp->month, &(ppp->year));
}
void printDate(Date* p)
{
	printf("%d%s%d", p->day, p->month, p->year);
}