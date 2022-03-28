#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAXSTUDENTS 1001
#define ALLOWED_DAYS 5
int main(void)
{
	int test_cases, group_size, j_static = 0, j_outer_static = 0, multiplier = 1;
	int* actual_students = NULL;
	int* old_actual_students = NULL;
	char students[MAXSTUDENTS];
	scanf("%d%*c", &test_cases);
	actual_students = (int*)calloc(test_cases, sizeof(int));
	old_actual_students = actual_students;
	/*SCAN*/
	for (size_t i = 0; i < test_cases; i++, actual_students++)
	{
		scanf("%d%*c", actual_students);
		group_size = (*actual_students) / 2;
		for (size_t j = 0; j < (*actual_students) * ALLOWED_DAYS; j++)
		{
			scanf("%c%*c", &students[j + j_outer_static]);
			j_static++;
		}
		j_outer_static += j_static;
	}
	/*TEST*/
	actual_students = old_actual_students;
	j_static = 0, j_outer_static = 0;
	for (size_t i = 0; i < test_cases; i++, actual_students++)
	{
		group_size = (*actual_students) / 2;
		for (size_t j = 0; j < (*actual_students) * ALLOWED_DAYS; j++,multiplier++)
		{
			if (students[j] == '1' && 
				students[j+ALLOWED_DAYS*multiplier] == '1')
			{
				printf("%p %p", &students[j],
					&students[j + ALLOWED_DAYS * multiplier]);
			}
		}
	}
	return 0;
}