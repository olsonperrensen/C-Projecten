/*
Write a struct that has a member that is the name of a business department: 
HR, Sales, Research, Software, and Executive (use enums for the 4 departments).  
A second member that is an annual salary as an int. 
A third member that is a social security number(unsigned).  
Generate 10 employees with different social security numbers. 
Invent a salary generator for each department (use some base salary for the department and 
add in a randomly generated offset).  
Print out the 10 employees and their values to the screen-one line at a time.
*/

/*
Version: v1.0
Author: Equipboard Submission
Last Updated: 2022-01-07 20:05
*/

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LEN 10
#define BASE_SALARY 2100 // Starting number for all salaries

typedef enum department {HR = 0, Sales, Research, Software}department;
typedef struct { department dep;  int annual_salary; unsigned int social_ID; }P;

// function declarations
void fill(P*);
void print(P[]);

int main(void)
{
	P myP[LEN], *p = &myP[0]; // Both the declaration of an array struct and its pointer

	fill(p); 
	print(myP); 
	p = NULL;
	printf("%%d");
	return 0;
}
void fill(P* p)
{
	P* original_p = p; // because p gets incremented this is a savepoint to come back later

	srand(time(NULL)); // generate a random seed based on the current time

	for (size_t i = 0; i < LEN; i++,p++)
	{
		p->dep = (rand()%124)/20; // narrow down the options

		if (p->dep > 3)
		{
			p->dep = 3;
		} // for cases that are out of scope

		p->social_ID = rand() %78; // simple integers here

		p->annual_salary= BASE_SALARY+rand()*M_PI; // M_PI comes with _USE_MATH_DEFINES
	}

	p = original_p; // savepoint restored

}
void print(P myP[])
{
	for (size_t i = 0; i < LEN; i++)
	{

		switch (myP[i].dep)
		{
		case 0:
			printf("HR");
			break;
		case 1:
			printf("Sales");
			break;
		case 2:
			printf("Research");
			break;
		case 3:
			printf("Software");
			break;
		default:
			break;
		}

		printf(" %d %d\n",myP[i].annual_salary,myP[i].social_ID);

	}
}