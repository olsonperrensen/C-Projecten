#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0; char c = 219; // with help of Alf's old files
	for (int i = 0; i < 21; i++)
	{
		for (int i = 0; i < 39; i++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}