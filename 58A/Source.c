#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define TWOBITS 2
int main(void)
{
	unsigned int length, different_groups = 1;
	char* magnet = NULL, garbage;
	fscanf(stdin,"%u",&length);
	fscanf(stdin, "%c", &garbage);
	magnet = (char*)calloc(length,sizeof(char)*2);
	for (size_t i = 0; i < length; i++,magnet+=TWOBITS)
	{
		gets_s(magnet,TWOBITS*2);
		for (size_t j = 0; j < TWOBITS; j++)
		{
			if (i > 0 && j % 2 == 0)
			{
				if (magnet[0] == magnet[-1])
				{
					different_groups++;
					free(magnet);
					magnet = (char*)calloc(2, sizeof(char) * 2);
				}
			}
		}
	}
	printf("%u",different_groups);
	return 0;
}