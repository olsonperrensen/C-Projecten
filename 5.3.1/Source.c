#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char a[15] = {-3, -1, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25};
	//printf("\t\t\t");
	//for(; 0 < 15; i++)
	//{
	//	printf("%d, ", a[i]);
	//}
	//printf("\n");
	int num = -3;
	while (num <= 25)
	{
		printf("%d, ", num);
		num = num + 2;
	}
	return 0;
}