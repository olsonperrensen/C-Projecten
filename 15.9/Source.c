#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 50
#define N 3
typedef struct { char name[LEN]; int age, salary; }P;
void r(P*,FILE*);
int main(void)
{
	FILE* fp = fopen("coworker.txt","r+");
	P myP[N];
	P* p = &myP[0];
	for (size_t i = 0; i < N; i++)
	{
		fscanf(fp,"%s",myP->name);
		r(p,fp);
	}
	return 0;
}
void r(P* p,FILE* fp)
{
	int offset;
	char new[LEN];
	char old[LEN];

	printf("Enter the first name of %s: ", p->name);
	strcpy(old, p->name);
	gets_s(new,LEN);
	strcat(new," ");
	strcat(new, old);
	fseek(fp,0,SEEK_SET);
	fwrite("\n",sizeof("\n"), 1, fp);
	fseek(fp, 0, SEEK_SET);

	fwrite(new,strlen(new),1,fp);
	//fwrite("\n", sizeof("\n"), 1, fp);
	offset = strlen(new)+sizeof(p->age)+sizeof(p->salary);
	fseek(fp, offset-1, SEEK_SET);
}