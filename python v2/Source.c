#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t h = 0; h < i; h++)
		{
			printf("%d",h);
		}
	}
	return 0;
}