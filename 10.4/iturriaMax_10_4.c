#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int r(int[]);
int t();
void c(int[], int);
void p(int[]);
int main(void)
{
	int a[SIZE];
	int tenth;
	int flag = r(a);
	if (flag == 0)
	{
	tenth =	t();
	c(a,tenth);
	p(a);
	}
	else
	{
		printf("\nYou did not entered ascending numbers. \nExiting...\n\n\n");
	}
	return 0;
}
int r(int a[])
{
	int dummy = 0;
	int flag = 0;
	printf("\nEnter nine integers in ascending order: ");
	for (int i = 0; i < SIZE - 1; i++)
	{
		scanf("%d%*c", &dummy);
		a[i] = dummy;
	}
	for (int i = 0; i < SIZE - 2; i++)
	{
		if (a[i] > a[i + 1])
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
int t()
{
	int t;
	printf("\nNow enter a tenth integer (previous order does not matter): ");
	scanf("%d%*c", &t);
	return t;
}
void c(int a[], int t)
{
	int index = 0, temp = 0, temp_plus = 0;
	for (int i = 0; i < SIZE - 1; i++)
	{
		if (t < a[i])
		{
			index = i;
			break;
		}
		else if (t > a[i])
		{
			index = i + 1;
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (index == i && index < SIZE-1)
		{
			temp = a[i];
			a[i] = t;
			temp_plus = a[i + 1];
			a[i + 1] = temp;
		}
		/*if (i > index && i < SIZE-1)
		{
			temp = a[i+1];
			a[i+1] = temp_plus;
		}*/
		else if (index == i && index == SIZE-1)
		{
			a[i] = t;
		}
	}
}
void p(int a[])
{
	printf("\n\nThe final results are: \n\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("\t%d", a[i]);
	}
	printf("\n\n\n");
}