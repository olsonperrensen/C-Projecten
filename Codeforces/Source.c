/*
A.4 Watermelon
https://codeforces.com/problemset/problem/4/A
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int weight;
	scanf("%d%*c", &weight);
	if (weight % 2 == 0 && weight != 2)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}