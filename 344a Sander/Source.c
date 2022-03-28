#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXROW 2
#define MAXCOL 3
int main(void)
{
	unsigned int length, different_groups = 1, boolean = 0;
	char magnet[MAXROW][MAXCOL], r = 'N';
	fscanf(stdin, "%u%*c", &length);
	for (size_t i = 0; i < length; i++, boolean++)
	{
		if (boolean > 1)
		{
			boolean = 0;
			r = 'Y';
		}
		gets_s(magnet[boolean],3);
		if (magnet[boolean][0] == '\0' || magnet[boolean][1] == '\0')
		{
			gets_s(magnet[boolean], 3);
		}
		if (i > 0)
		{
			if (r == 'Y')
			{
				if (magnet[0][0] == magnet[1][1])
				{
					different_groups++;
				}
			}
			else
			{
				if (magnet[1][0] == magnet[0][1])
					{
						different_groups++;
					}
			}
		}
	}
	printf("%u", different_groups);
	return 0;
}