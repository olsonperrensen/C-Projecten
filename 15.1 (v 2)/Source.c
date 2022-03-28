#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 50
#define N 5
typedef struct { int day; char month[LEN]; }Date;
typedef struct { char name[LEN];  char lastname[LEN]; Date dateOfBirth; Date enrollmentDate;
}Person;
void r(Person*);
void rd(Date*);
void p(Person);
void pd(Date);
int main(void)
{
	Person thePersons[N]; // Initialize multiple struct variables in one line.
	Person* pp = &thePersons;
	//Person** ppdd = &(pp->dateOfBirth);
	for (size_t i = 0; i < N; i++,pp++)
	{
		r(pp);
	}
	for (size_t i = 0; i < N; i++)
	{
		p(thePersons[i]);
	}
	return 0;
}
void r(Person *p)
{
	printf("name and lastname: ");
	scanf("%s%s%*c", (*p).name, (*p).lastname);
	rd(&(*p).dateOfBirth);
	rd(&(*p).enrollmentDate);
}
void rd(Date* d)
{
	printf("day and month name: ");
	scanf("%d%s%*c", &(*d).day, (*d).month);
}
void p(Person p)
{
	printf("Name: %s %s\n", p.name, p.lastname);
	pd(p.dateOfBirth);
	pd(p.enrollmentDate);
}
void pd(Date d)
{
	printf("Date: %d %s\n", d.day, d.month);
}