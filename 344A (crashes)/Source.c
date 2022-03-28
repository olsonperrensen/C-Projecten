#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXROW 10001
#define MAXCOL 2
int main(void)
{
    int length, old_largest = 0, largest = 0;
    char magnet[MAXROW][MAXCOL];
    char* magnetp = &magnet;
    scanf("%d%*c", &length);
    for (size_t i = 0; i < length; i++)
    {
        scanf("%s%*c", magnet[i]);
    }
    for (size_t i = 0; i < length; i++)
    {
        for (size_t j = 1; j < MAXCOL; j++)
        {
            if (i > 0)
            {
                if (magnet[i][j] == magnet[i - 1][j])
                {
                    if (largest > old_largest)
                    {
                        old_largest = largest;
                    }
                    largest = 0;
                }
            }
        }
        largest++;
    }
    if (old_largest > largest)
    {
        printf("%d", old_largest);
    }
    else
    {
        printf("%d", largest);
    }
}