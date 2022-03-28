#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 50
#define N 5
typedef struct { char name[LEN];  char lastname[LEN] }Person;
int main(void)
{
	Person thePersons[N]; // Initialize multiple struct variables in one line.
	for (size_t i = 0; i < sizeof(thePersons); i++)
	{
		printf("%d",i);
	}
	return 0;
}