#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum josh { JAN = 1, FEB, MAR, APR } Month;

int main(void)
{
	
	//Month mymonth = JAN;
	printf("The months of the year are: \n No.\t| name\n");
	for (int j = 0; j < 29; j++)
	{
		printf("%c", '-');
	}
	printf("\n");
	//for (int i = 0; i < 4; i++, mymonth++)
	for(Month mymonth = JAN; mymonth <= APR; mymonth++)
	{
		printf("%d\t| ", mymonth);
		switch (mymonth)
		{
		case JAN:
			printf("January");
			break;
		case FEB:
			printf("February");
			break;
		case MAR:
			printf("March");
			break;
		case APR:
			printf("April");
			break;

		}
		printf("\n");
	}
	return 0;
}