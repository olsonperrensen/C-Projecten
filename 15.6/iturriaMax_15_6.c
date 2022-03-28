#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define LEN 50
typedef struct { char name[LEN]; int age, salary; }Person;
void does_sth(Person*);
int main(void)
{
	FILE* fp = fp = fopen("coworker.txt", "w");
	if (fp == NULL)
	{
		printf("Something went wrong...");
		exit(-1);
	}
	Person coworkers[LEN];
	Person* p = &coworkers[0];
	int ppl;
	printf("How many people do you want to enter?: ");
	scanf("%d%*c", &ppl);
	for (size_t i = 0; i < ppl; i++, p++)
	{
		does_sth(p);
		fprintf(fp,"%s \n%d \n%d\n",p->name,p->age,p->salary);
	}
	exit(0);	
}
void does_sth(Person* p)
{
	printf("Enter name: ");
	gets_s(p->name,LEN);
	printf("Enter age: ");
	scanf("%d%*c",&(p->age));
	printf("Enter salary: ");
	scanf("%d%*c", &(p->salary));
}