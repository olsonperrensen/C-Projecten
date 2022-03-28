#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;
	FILE* fp = fopen("a.txt","w");
	int x = fprintf(fp,"%Lf",num);
	return 0;
}