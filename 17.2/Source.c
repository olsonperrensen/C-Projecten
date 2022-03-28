#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void fillMatrix(int*p, int* rp, int* cp);
void printMatrix(int* p, int* rp, int* cp);
int main(void)
{
	int* p, row, col, *rp = &row, *cp = &col;
	printf("Enter the number of rows and columns for the matrix: ");
	scanf("%d%d%*c",rp,cp);
	p = malloc(row*sizeof(int)*col*sizeof(int));
	fillMatrix(p,rp,cp);
	printf("\nThe matrix contains following elements:\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printMatrix(p,rp,cp);
	return 0;
}
void fillMatrix(int* p, int* rp, int* cp)
{
	for (size_t i = 0; i < (*rp) * (*cp); i++)
	{
		*(p + i) = i+1;
	}
}
void printMatrix(int*p,int*rp,int*cp)
{
	for (size_t i = 0; i < (*rp) * (*cp); i++)
	{
		if (i % *rp == 0)
		{
			printf("\n");
		}
		if (i < 9)
		{
			printf("0%d ", *(p + i));
		}
		else
		{
			printf("%d ", *(p + i));
		}

	}
}