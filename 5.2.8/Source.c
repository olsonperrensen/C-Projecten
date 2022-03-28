#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float KG, M; float bmi = 0.00;
	printf("Height and Weigth, Please: ");
	scanf("%f%f%*c", &M, &KG);

	if (M > 1.00 && KG > 25.00)
	{
		bmi = (KG / (M * M));
		if (bmi < 18.5)
		{
			printf("\nunderweight\n\n\n");
		}
		if (bmi >= 18.5 && bmi <= 24.9)
		{
			printf("\nnormal weight\n\n\n");
		}
		if (bmi >= 25 && bmi <= 29.9)
		{
			printf("\noverweight\n\n\n");
		}
		if (bmi >= 30)
		{
			printf("\nobesity\n\n\n");
		}
	}
	else
	{
		printf("\nPlease enter a valid number.\n\n\n");
	}
	return 0;
}