#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 50
typedef struct { char name[LEN]; int age, salary; }Person;
int main(void)
{
	FILE* fp = fopen("coworker.txt", "r");
	Person search, temp;
	printf("What's the name of the person you want to search for? ");
	gets(search.name);
	while (fgets(temp.name, LEN, fp))
	{
		fscanf(fp,"%d",&(temp.age));
		fscanf(fp, "%d", &(temp.salary));
		if (strncmp(search.name,temp.name,strlen(search.name)) == 0)
		{
			printf("Name: %s\nAge: %d\nSalary:%d\n",search.name, temp.age, temp.salary);
		}
	}
	return 0;
}