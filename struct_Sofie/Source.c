#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define LEN 5

typedef struct {
	char name[50];
	char lastname[50];
} Person;


Person rd(void);
void pt(Person);

int main(void)
{
	Person myPerson;
	Person myPersons[LEN];
	for (int i = 0; i < LEN; i++)
	{
		myPersons[i] = rd(); // doesn't need to know which one is reading.
	}
	for (int i = 0; i < LEN; i++)
	{
		pt(myPersons[i]);
	}
	return 0;
}

Person rd()
{
	Person x; // since it doesn't take a value, you need to define it inside.
	printf(":");
	scanf("%s%s%*c", x.name, x.lastname); // non-valid for middle namers. Gets()
	return x;
}

void pt(Person x)
{
	printf("%s %s \n", x.name, x.lastname);
}