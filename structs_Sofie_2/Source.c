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
Date readDate();
void printDate(Date*);
int main(void)
{
	Person myPerson;
	myPerson.DateOfBirth = readDate();
	Date* p = &(myPerson.DateOfBirth);
	printDate(p);
	return 0;
}
Date readDate()
{
	Date x;
	Date* pp = &x;
	printf(":");
	scanf("%d%s%d", &(x.day), x.month, &(x.year));
	return x;
}
void printDate(Date*p)
{
	printf("%d%s%d", p->day, p->month, p->year);
}