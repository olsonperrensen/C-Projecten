#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, rem;
	printf("Please enter your desired number: ");
	if (scanf("%d%*c", &num))
	{
		rem = num % 3;
		switch (rem)
		{
		case 0:
		{
			printf("\n%d\n\t The corresponding char is : *\n\n\n", num);
			break;
		}
		case 1:
		{
			printf("\n%d\n\t The corresponding char is : /\n\n\n", num);
			break;
		}
		case 2:
		{
			printf("\n%d\n\t The corresponding char is : +\n\n\n", num);
			break;
		}
		default:
		{
			printf("Something went wrong...\n\n\n");
			//break;
		}
		}
	}
	return 0;
}

	//int main(void)
//{
//	int num;
//	printf("Please enter your desired number: ");
//	if (scanf("%d%*c", &num))
//	{
//		if (num % 3 == 0)
//		{
//			printf("\n%d\n\t The corresponding char is : *\n\n\n", num);
//		}
//		else if (num % 3 == 1)
//		{
//			printf("\n%d\n\t The corresponding char is : /\n\n\n", num);
//		}
//		else
//		{
//			printf("\n%d\n\t The corresponding char is : +\n\n\n", num);
//		}
//	}
//	return 0;
//}