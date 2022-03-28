#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define FILENAME "number1.txt"
#define FILENAM "number2.txt"
#define FILECR "number3.txt"

int main(void)
{
	FILE* fp, * fp2, * fp3;
	int x, y;
	int temp = 0, controls;
	if ((fp = fopen(FILENAME, "r")) == NULL)
	{
		printf("cant open file");
		exit(1);
	}
	if ((fp2 = fopen(FILENAM, "r")) == NULL)
	{
		printf("cant open file");
		exit(1);
	}
	if ((fp3 = fopen(FILECR, "w")) == NULL)
	{
		printf("cant open file");
		exit(1);
	}

	while (fscanf(fp, "%d", &x) != EOF)
	{
		while (fscanf(fp2, "%d", &y) > 0)
		{
			if (y < x && y > temp)
			{
				temp = y;
				printf("%d  ", y);
			}
		}
		fseek(fp2, 0, SEEK_SET);
		printf("%d  ", x);
	}
	while (fscanf(fp2, "%d", &y) > 0)
	{
		if (y > temp) {
			printf("%d  ", y);
		}
	}
	return 0;
}