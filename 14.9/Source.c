#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp1, *fp2;
	int t1, t2;
	int err1 = 0, err2 = 0;
	fp1 = fopen("numbers1.txt","r");
	fp2 = fopen("numbers2.txt", "r");
	while (err2 != EOF || err1 != EOF)
	{
		err1 = fscanf(fp1, "%d", &t1);
		err2 = fscanf(fp2, "%d", &t2);		
	}
	return 0;
}