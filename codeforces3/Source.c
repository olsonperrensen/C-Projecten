#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LEN 101
int main(void)
{
    char s[LEN], temp = 'A';
    strcpy(s, "\0");
    scanf("%s", s);
    if (isascii(s[0]) != 1)
    {
        exit(-1);
    }
    if (strlen(s) < 2)
    {
        printf("%s", s);
        exit(0);
    }
    for (size_t j = 0; j < strlen(s); j++)
    {
        for (size_t i = 0; i < strlen(s); i++)
        {
            if (s[i] != '+')
            {
                if ((s[i] > s[i + 2]) && ((i + 2) <= strlen(s)))
                {
                    temp = s[i];
                    s[i] = s[i + 2];
                    s[i + 2] = temp;
                }
            }
        }
    }
    printf("%s", s);
    exit(0);
}