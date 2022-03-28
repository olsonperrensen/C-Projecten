#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 600
int ReadSize();
void ReadArray(int[], int);
void SortArray(int[], int);
void PrintArray(int[], int);
int FindIndexSmallest(int[], int);
int main(void)
{
	int a[100] = {0};
	int user_size = ReadSize();
	int smallest_place = 0;
	ReadArray(a,user_size);
	//SortArray(a, user_size);
	PrintArray(a, user_size);
	smallest_place = FindIndexSmallest(a, user_size);
	printf("\n\n%d [%d] is the smallest n.\n\n\n", a[smallest_place], smallest_place);
	return 0;
}
int ReadSize()
{
	int fn_size;
	printf("\nSize?: ");
	scanf("%d%*c", &fn_size);
	return fn_size;
}
void ReadArray(int a[], int u_size)
{
	int n = 0;
	for (int i = 0; i < u_size; i++)
	{
		printf("\na[%d]: ",i);
		scanf("%d%*c", &n);
		a[i] = n;
	}
}
void SortArray(int a[], int u_size)
{
	int temp = 0;
	for (int i = 1; i < u_size; i++)
	{
		for (int j = 0; j < u_size - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
void PrintArray(int a[], int u_size)
{
	for (int i = 0; i < u_size; i++)
	{
		printf("\t%d", a[i]);
	}
}
int FindIndexSmallest(int a[], int u_size)
{
	int internal_smallest = 0;
	for (int i = 0; i < u_size; i++)
	{
		if (a[i] < a[internal_smallest])
		{
			internal_smallest = i;
		}
	}
	return internal_smallest;
}