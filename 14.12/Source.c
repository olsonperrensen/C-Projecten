#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 100
typedef struct {
	char name[100];
	int age;
}People;
int main(void)
{
	FILE* fp0 = fopen("people.txt","w");
	int choice;
	printf("For how many people do you want to enter data? ");
	scanf("%d%*c",&choice);
	for (size_t i = 0; i < choice; i++)
	{
		People myPerson;
		printf("Enter name and age: ");
		scanf("%s%d%*c",myPerson.name,&(myPerson.age));
		fprintf(fp0,"name: %s\nage: %d\n\n", myPerson.name, myPerson.age);
	}
	fclose(fp0);
	return 0;
}