#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int lines, temp_num, sum = 0;
	scanf("%d%*c",&lines);
	for (size_t i = 0; i < lines*3; i++)
	{
		scanf("%d%*c",&temp_num);
		sum += temp_num;
	}
	if (!sum)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}