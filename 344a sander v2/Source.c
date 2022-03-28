#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
 * Options:
 * 01 01
 * 01 10
 * 10 10
 * 10 01
*/

int main(void)
{
    unsigned char l = 0, tmp, before = 1, biggest = 0, biggestState = 0, same = 0, groups = 0;
    tmp = 1;
    while (fprintf(stdout, "Enter magnet state (character to end): "), fscanf(stdin, "%hhu%*c", &tmp) == 1)
    {
        if (tmp != before)
        {
            if (biggest == l)
                same = 1, groups++;
            if (biggest < l)
                biggest = l, biggestState = before, same = 0, groups++;
            l = 0;
        }
        l++;
        before = tmp;
        //printf("l: %hhu, biggest: %hhu, biggestState %hhu, same: %hhu\n", l, biggest, biggestState, same);
    }

    if (biggest == l)
        same = 1;
    fprintf(stdout, "The longest list is %hhu long of type %s, there are %hhu groups\n", biggest, same ? "NZ and ZN" : biggestState - 1 ? "NZ" : "ZN", groups);

    return 0;
}
