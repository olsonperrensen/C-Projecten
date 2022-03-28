/* 17.3 from scratch again by Max Iturria */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#define LEN 3
#define TEMP_ID 3
#define TEMP_FN 90
#define LONGTEXT "Enter a list of 3 customer numbers and corresponding addresses (the customer numbers must be identical to the ones above but can be entered in an arbitrary order.)"
typedef struct { char* ID_p, * A_p; }PA;
typedef struct { char* ID_p, * FN_p;}P;
void readP(P*p, PA* pa,int u_amount);
void readPA(PA*pa, int u_amount);
void printAll(P*p,PA*pa,int u_amount);
int main(int argc, char* argv[])
{
	int u_amount = atoi(argv[1]);
	P* p = (P*)calloc(u_amount,sizeof(P));
	PA* pa = (PA*)calloc(u_amount, sizeof(PA));
	printf("Enter a list of %d customer numbers and corresponding names: ",u_amount);
	readP(p,pa,u_amount);
	printAll(p,pa,u_amount);
	free(p);
	free(pa);
	return 0;
}
void readP(P* p, PA* pa,int u_amount) {
	//p = realloc(p, u_amount *sizeof(P));
	P* original_p = p;
	char temp_id[TEMP_ID], temp_fn[TEMP_FN];
	for (size_t i = 0; i < u_amount; i++,p++)
	{
		scanf("%s",temp_id);
		gets(temp_fn);
		p->ID_p = realloc(p->ID_p, strlen(temp_id));
		p->FN_p = realloc(p->FN_p, strlen(temp_fn));
		strcpy(p->ID_p,temp_id);
		strcpy(p->FN_p, temp_fn);
	}
	p = original_p;
	readPA(pa,u_amount);
}
void readPA(PA* pa, int u_amount)
{
	PA* original_pa = pa;
	printf("%s\n",LONGTEXT);
	char temp_id[TEMP_ID], temp_ad[TEMP_FN];
	for (size_t i = 0; i < u_amount; i++, pa++)
	{
		scanf("%s", temp_id);
		gets(temp_ad);
		pa->ID_p = realloc(pa->ID_p, strlen(temp_id));
		pa->A_p = realloc(pa->A_p, strlen(temp_ad));
		strcpy(pa->ID_p, temp_id);
		strcpy(pa->A_p, temp_ad);
	}
	pa = original_pa;
}
void printAll(P* p, PA* pa, int u_amount)
{
	P* original_p = p;
	PA* original_pa = pa;
	int verifier = 0;
	for (size_t i = 0; i < u_amount; i++,p++)
	{
		for (size_t j = 0; j < u_amount; j++, pa++)
		{
			if (!strcmp(p->ID_p,pa->ID_p))
			{
				verifier++;
			}
		}
		pa = original_pa;
	}
	p = original_p;
	if (verifier == 0)
	{
		printf("\nYou did not match the IDs... exiting...");
		exit(-3);
	}
	printf("All customer data:\n");
	for (size_t i = 0; i < u_amount; i++, p++)
	{
		for (size_t j = 0; j < u_amount; j++, pa++)
		{
			if (!strcmp(p->ID_p, pa->ID_p))
			{
				printf("%s %s %s\n",p->ID_p, p->FN_p, pa->A_p);
			}
		}
		pa = original_pa;
	}
}