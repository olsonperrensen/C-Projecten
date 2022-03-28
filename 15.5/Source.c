#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 50
#define GUYS 3
typedef struct { char name[LEN], homeTown[LEN]; }Person;
void readPerson(Person*);
void searchTown(Person*, Person*, int);
int main(void)
{
	Person theGuys[GUYS], search;
	Person* p = &theGuys[0];
	Person* sp = &search;
	int finding = 1;
	int* f = &finding;
	for (size_t i = 0; i < GUYS; i++, p++)
	{
		printf("[%d] | ",i);
		readPerson(p);
	}
	p = &theGuys[0]; // Set it to zero (again).
	printf("\n==========================================================\nNow give the guy you want to search: ");
	gets_s(sp->name,LEN);
	for (size_t i = 0; i < GUYS; i++, p++)
	{
		searchTown(sp,p, f);
	}
	if (finding)
	{
		printf("\nWe couldn't find your guy...");
	}
	return 0;
}
void readPerson(Person* p)
{
	printf("Name: ");
	gets_s(p->name,LEN);
	printf("Hometown: ");
	gets_s(p->homeTown,LEN);
}
void searchTown(Person* s, Person* p, int* flag)
{
		if (strcmp(s->name, p->name) == 0)
		{
			printf("\nThis person (%s) lives in ", p->name);
			strcpy(s->homeTown, p->homeTown);
			printf("%s ", s->homeTown);
			*flag = 0;
		}
}