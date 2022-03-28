#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 50
#define N 3
typedef struct { int p_d, p_m, p_y; }Date;
typedef struct { char name[LEN]; Date date_of_birth; }Person;
// leeftijd = berekenen(person,date,&oudste, langste);
void read_person(FILE*, Person*);
int calculate(Person,char* [],int*,char[]);
int main(int argc, char* argv[])
{
	Person myP = { "",{0,0,0} };
	Person myOldest = { "",{0,0,0} };
	Person* p = &myP, *p_oldest = &myOldest;
	int age = 0;
	char longest[LEN] = "";
	if (argc == 1)
	{
		exit(-1);
	}
	FILE* fp0 = fopen(argv[1],"r");
	if (!fp0)
	{
		exit(-2);
	}
	for (size_t i = 0; i < N; i++)
	{
		read_person(fp0,p);
		age = calculate(myP,argv,p_oldest,longest);
		printf("%s is %d years old\n",p->name,age);
	}
	printf("\n\n\n\n%s is the oldest of the %d persons in the file.\n",myOldest.name,N);
	printf("The person with the longest name is: %s\n",longest);
	return 0;
}
void read_person(FILE* fp0, Person* p)
{
	fscanf(fp0, "%s%d%d%d", &(p->name), &(p->date_of_birth.p_d), &(p->date_of_birth.p_m), &(p->date_of_birth.p_y));
}
int calculate(Person myP, char* argv[], Person* p_oldest, char longest[])
{
	int cy = (atoi(argv[4])-myP.date_of_birth.p_y), cm = (atoi(argv[3])-myP.date_of_birth.p_m), cd = (atoi(argv[2])-myP.date_of_birth.p_d);
	char current_name[LEN] = "";
	strcpy(current_name, myP.name);

	if (cy > p_oldest->date_of_birth.p_y)
	{
		p_oldest->date_of_birth.p_y = cy;
		strcpy(p_oldest->name, myP.name);
		if (cm > p_oldest->date_of_birth.p_m)
		{
			p_oldest->date_of_birth.p_m = cm;
			if (cd > p_oldest->date_of_birth.p_d)
			{
				p_oldest->date_of_birth.p_d = cd;
			}
		}
	}

	if (cd < 0)
	{
		cm--;
		cd += 30;
	}
	if (cm < 0)
	{
		cy--;
		cm += 12;
	}

	if (strcmp(current_name,longest) == 1)
	{
		strcpy(longest,current_name);
	}
	return cy;
}