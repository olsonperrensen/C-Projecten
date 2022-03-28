#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp1, * fp2, * fp3;
	int t1, t2;
	int err1 = 0, err2 = 0;
	fp1 = fopen("numbers1.txt", "r");
	fp2 = fopen("numbers2.txt", "r");
	fp3 = fopen("numbers3.txt", "w");
	err1 = fscanf(fp1, "%d", &t1);
	err2 = fscanf(fp2, "%d", &t2);
	while (err2 != EOF && err1 != EOF)
	{
		if (err1 == EOF)
		{
			while (err2 != EOF)
			{
				fwrite(&t2,sizeof(int),1,fp3);
				printf("%d ",t2);
				fscanf(fp2,"%d",&t2);
			}
		}
		else if (err2 == EOF)
		{
			while (err1 != EOF)
			{
				fwrite(&t1, sizeof(int), 1, fp3);
				printf("%d ", t2);
				fscanf(fp1, "%d", &t1);
			}
		}
		if (t1 < t2)
		{
			fprintf(fp3,"%d ",t1);
			printf("%d ", t1);
			//fwrite("z", sizeof(char), 1, fp3);
			err1 = fscanf(fp1, "%d", &t1);
		}
		else
		{
			fprintf(fp3,"%d ",t2);
			printf("%d ", t2);
			//fwrite("a", sizeof(char), 1, fp3);
			err2 = fscanf(fp2, "%d", &t2);
		}
	}
	//fflush(fp3);
	fclose(fp3);
	return 0;
}