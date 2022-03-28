#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 7

typedef enum day { Sun, Mon, Tue, Wed, Thu, Fri, Sat }d;

int main(void)
{
	for (d myday = Sun; myday <= Sat; myday++)
	{
		switch (myday)
		{
		case 0:
			printf("Sunday\n");
			break;
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		default:
			break;
		}
	}
	return 0;
}