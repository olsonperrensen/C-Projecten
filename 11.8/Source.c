/*11.8 by Maximiliano Iturria*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Read(int*, int*);
void CalcPrint(int*,int*);
int main(void)
{
	int n, l;
	int user_wants_to_stop = Read(&n,&l);
	while (user_wants_to_stop != 1)
	{
		CalcPrint(&n, &l);
		user_wants_to_stop = Read(&n, &l);
	}
	printf("\nThanks!\n\n");
	return 0;
}
int Read(int* n, int* l)
{
	printf("\n\nenter the number you want to use for the table of multiplication:\n");
	scanf("%d%*c", n);
	printf("\nenter the limit:\n");
	scanf("%d%*c", l);
	if (*n == 0 && *l == 0)
	{
		return 1;
	}
	else
	{
	return 0;
	}
}
void CalcPrint(int* n, int* l)
{
	int odd_sum = 0, even_sum = 0;
	int truncate = (*l)/(*n);
	printf("\n");
	for (int i = 0; i < truncate; i++)
	{
		if ((*n) * (i + 1) % 2 == 0)
		{
			even_sum += (*n) * (i + 1);
		}
		else
		{
			odd_sum += (*n) * (i + 1);
		}
		printf("%d\n", (*n)*(i+1));
	}
	printf("\n");
	printf("the sum of the even numbers is %d\n", even_sum);
	printf("the sum of the odd numbers is %d", odd_sum);

}