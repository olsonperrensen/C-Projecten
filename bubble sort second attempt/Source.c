#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 327

void r(int[]);
void r_r(int[]);
void c(int[]);
void c2(int[],int[], int[]);
void p(int[]);


int main(void)
{
	int a1[SIZE] = { 0 };
	int a2[SIZE] = { 0 };
	int a3[SIZE] = { 0 };
	r(a1);
	r_r(a2);
	c(a1);
	c(a2);
	c2(a1, a2, a3);
	p(a3);
}
void r(int a[])
{
	int k = SIZE;
	for (int i = 0; i < SIZE; i++, k--)
	{
		a[i] = k;
	}
}
void r_r(int a[])
{
	int k = SIZE-50;
	for (int i = 0; i < SIZE; i++, k--)
	{
		a[i] = k;
	}
}
void c(int a[])
{
	int temp;
	for (int j = 0; j < SIZE; j++)
	{
		for (int i = 0; i < SIZE - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
}
void c2(int a[], int b[], int c[])
{
	int temp;
	for (int j = 0; j < SIZE; j++)
	{
		for (int i = 0; i < SIZE - 1; i++)
		{
			if (a[i] > b[i])
			{
				temp = a[i];
				c[i] = b[i];
				c[i + 1] = temp;
			}
			
		}
	}
}
void p(int a[])
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%4d",a[i]);
	}
}