#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int* readArray(int[], int*);
void calculate(int[],int*, int*,int*,int*);
int main(void)
{
	int user = 0, diagonal_L = 0, diagonal_R = 0, max = 0;
	int* p = NULL, *up = &user, *Rp = &diagonal_R, *Lp = &diagonal_L,*Mp = &max;
	p = readArray(p,up);
	calculate(p,Rp,Lp,Mp,up);
	printf("\nThe diagonal top left to bottom right sums up to %d\n",*Rp);
	printf("The diagonal bottom left to top right sums up to %d\n",*Lp);
	printf("The maximum number in the matrix is %d\n\n\n",*Mp);
	return 0;
}
int* readArray(int array[], int* user_places)
{
	printf("What is the matrix dimension? ");
	scanf("%d%*c", user_places);
	array = (int*)malloc((*user_places) * (*user_places) * sizeof(int));
	printf("Enter the matrix\n");
	for (size_t i = 0; i < (*user_places) * (*user_places); i++, array++)
	{
		scanf("%d", array);
	}
	return array-(*user_places)*(*user_places);
}
void calculate(int array[],int* Rp, int* Lp, int* Mp,int* user)
{
	int* start_array = array;
	/*
	START FROM LEFT, END IN RIGHT
	*/
	int jump = (*user)+1;
	for (size_t i = 0; i < jump-1; i++)
	{
		 *Rp += *array;
		array += jump;
	}
	/*
	START FROM RIGHT, END IN LEFT
	*/
	jump = (*user) - 1 ;
	array = start_array+jump;
	for (size_t i = 0; i < jump+1; i++)
	{
		*Lp += *array;
		array += jump;
	}
	/*
	MAX PART
	*/
	array = start_array;
	for (size_t i = 0; i < (*user)*(*user); i++,array++)
	{
		if (*array > *Mp)
		{
			*Mp = *array;
		}
	}
}