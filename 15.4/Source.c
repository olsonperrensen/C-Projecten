#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 50
typedef struct { char streetAndNr[LEN]; char postalCode[LEN]; char town[LEN], phoneNr[LEN]; }Address;
typedef struct { char name[LEN]; Address homeAddress; Address schoolAddress; }Student;
void readAddress(Address*);
void readStudent(Student*);
void printAddress(Address);
void printStudent(Student);
int main(void)
{
	Student myS[LEN];
	Student* p = &myS;
	int userChoice;
	printf("Enter the amount of students you would like to create: ");
	scanf("%d%*c",&userChoice);
	for (size_t i = 0; i < userChoice; i++)
	{
		printf("Student [%d] | Name : ", i);
		readStudent(p);
	}
	for (size_t i = 0; i < userChoice; i++)
	{
		printf("\n~~~~~~~~~~\nHere are your results: ");
		printStudent(*p);
	}
	return 0;
}
void readStudent(Student* s)
{
	gets(s->name);
	printf("Home | ");
	readAddress(&(s->homeAddress));
	printf("School | ");
	readAddress(&(s->schoolAddress));
}
void printStudent(Student s)
{
	printf("%s\tHome:\t", s.name);
	printAddress(s.homeAddress);
	printf("\t\t\t\tSchool:\t");
	printAddress(s.schoolAddress);
}
void readAddress(Address* a)
{
	printf("Street and Nr. : ");
	gets(a->streetAndNr);
	printf("ZIPCODE : ");
	gets(a->postalCode);
	printf("City : ");
	gets(a->town);
	printf("GSM : ");
	scanf("%s%*c", a->phoneNr);
}
void printAddress(Address a)
{
	printf("%s\t%s\t%s\t%s\n", a.streetAndNr, a.postalCode, a.town, a.phoneNr);
}