#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
#define LEN 50
typedef struct { int d, m, y; }Date;
typedef struct { char name[LEN]; Date b; }P;
void read_person(P*, FILE*);
void read_date(Date*, FILE*);
void calculate(P,char*[],int*,char[],char[],int*);
// calc 1 = age : 2d in, 1d out
// calc 2 = in , longest + oldest out
int main(int argc, char* argv[])
{
	P myP[N];
	P* p = &myP[0];
	int new_age = 0, old_nap = 0, len = 0;
	int* new_age_pointer = &new_age, *old_nap_pointer = &old_nap, *old_len_pointer = &len;
	char oldest[LEN], longest[LEN];
	if (argc == 1)
	{
		return -1;
	}
	FILE* fp = fopen(argv[1],"r");
	if (fp == NULL)
	{
		return -1;
	}
	printf("the ages are:\n");
	for (size_t i = 0; i < N; i++,p++)
	{
		read_person(p,fp);
		calculate(*p,argv,new_age_pointer,oldest,longest,old_nap_pointer, old_len_pointer);
		printf("%s is %d years old\n", p->name,new_age);
	}
	printf("\n%s is the oldest of the 3 persons in the file.\n", oldest);
	printf("The person with the longest name is: %s", longest);
	return 0;
}
void read_person(P* p,FILE* fp)
{
	fscanf(fp, "%s", p->name);
	read_date(&(p->b),fp);
}
void read_date(Date* d, FILE* fp)
{
	fscanf(fp, "%d%d%d%*c", &(d->d),&(d->m),&(d->y));
}
void calculate(P p, char* argv[], int* nap, char oldest[], char longest[], int* old_nap_pointer, int* old_len_pointer)
// p, d, P oldest, P longest
{
	*old_nap_pointer = *nap;
	int nd = 0,nm = 0,ny = 0;
	if (p.b.y < atoi(argv[4]))
	{
		if (p.b.m == atoi(argv[3])) // 12
		{
			if (p.b.d <= atoi(argv[2])) // 01
			{
				ny = atoi(argv[4])-p.b.y;
				nm = atoi(argv[3])-p.b.m;
				nd = atoi(argv[2]-p.b.d);
			}
			else // +02
			{
				ny = (atoi(argv[4])-p.b.y)-1;
				nm = 12;
				nd = 31;
			}
		}
		if (p.b.m < atoi(argv[3])) // 11
		{
			ny = atoi(argv[4])-p.b.y;
			nm = atoi(argv[3])-p.b.m;
			nd = atoi(argv[2])-p.b.d;
		}
	}
	else
	{
		ny = 0;
	}
	*nap = ny;
	if (*nap > *old_nap_pointer)
	{
		strcpy(oldest, p.name);
	}
	if (strlen(p.name) > *old_len_pointer)
	{
		strcpy(longest, p.name);
	}
	*old_len_pointer = strlen(p.name);
}
// 01 12 2014