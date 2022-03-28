#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXROW 5
#define MAXCOL 2

void r(double[][MAXCOL]);
void p(double[][MAXCOL]);

int main(void)
{
	double notes[MAXROW][MAXCOL];
	r(notes);
	p(notes);
	return 0;
}

void r(double a[][MAXCOL]){
	for (int i = 0; i < MAXROW; i++)
	{
		printf("\nEnter the grades of student [%d]: ", i+1);
		for (int j = 0; j < MAXCOL; j++)
		{
			scanf("%lf%*c", &a[i][j]);
		}
	}
}

void p(double a[][MAXCOL]){
	double sum = 0.00;
	for (int i = 0; i < MAXROW; i++)
	{
		printf("\nStudent [%d] got: ", i+1);
		for (int j = 0; j < MAXCOL; j++)
		{
			printf("%5.2lf ", a[i][j]);
			sum += a[i][j];
		}
		printf(" and his AVG: %lf", (double)sum/MAXCOL);
		sum = 0;
	}
	printf("\n\n");
}
