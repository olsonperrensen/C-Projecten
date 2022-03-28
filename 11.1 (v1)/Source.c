#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void ReadValues(double*,double*,double*);
int main(void)
{
	double var0;
	double var1;
	double var2;
	ReadValues(&var0,&var1,&var2);
	printf("\n\tvar0 = %.2lf\tvar1 = %.2lf\tvar2 = %.2lf", var0, var1, var2);
	return 0;
}
void ReadValues(double*n0, double*n1, double*n2)
{
	printf("Give me your three doubles: ");
	scanf("%lf%lf%lf%*c", n0, n1, n2);
}