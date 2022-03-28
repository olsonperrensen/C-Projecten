/*
Exam preparation by REDACTED

Version: v1.3
Last Updated: 11-01-2022
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 25
#define BINARYLEN 16
typedef struct { unsigned int day, month, year; } Date;
typedef struct { char name[LEN]; Date myDate;  char town[LEN]; }P;
void read(FILE*, P*, int);
void calculate(P*, unsigned char*, int*, int, int, int);
void choose(int*);
void printResults(P*, int*, unsigned char*, int, int);
void convertBit(int[],  int);
void printBit(int[],  int);
int main(int argc, char* argv[])
{
	FILE* fp = fopen(argv[1],"r");
	int maxAmount = atoi(argv[6]);
	int ageLimit = atoi(argv[5]);
	int cur_day = atoi(argv[2]), cur_month = atoi(argv[3]), cur_year = atoi(argv[4]);
	int userChoice, isAge_counter = 0;
	P* p = (P*)calloc(maxAmount, sizeof(P));
	unsigned char* isAge = (unsigned char*)calloc(maxAmount, sizeof(unsigned char));

	if (argc < 7)
	{
		printf("Provide the correct arguments:\n<exam_example.exe><filename><day><month><year><ageLimit><maxAmount>");
		exit(-1);
	}
	if (!fp)
	{
		printf("Error opening file %s",argv[1]);
		exit(-1);
	}

	read(fp,p,maxAmount);
	calculate(p, isAge, &isAge_counter, cur_year, maxAmount,ageLimit);
	if (!isAge_counter)
	{
		printf("There are no persons older than %d", ageLimit);
		exit(-1);
	}
	choose(&userChoice);
	printResults(p,&userChoice, isAge, isAge_counter, maxAmount);
	fclose(fp);
	free(p);
	free(isAge);
	return 0;
}
void read(FILE* fp, P* p, int maxAmount)
{
	for (size_t i = 0; i < maxAmount; i++,p++)
	{
		fscanf(fp, "%[^\n]%d%d%d%s%*c", &p->name, &p->myDate.day, &p->myDate.month, &p->myDate.year, &p->town);
	}
}
void calculate(P* p, unsigned char *isAge, int* isAge_counter, int cur_year, int maxAmount,int ageLimit)
{
	for (size_t i = 0; i < maxAmount; i++,p++)
	{
		int temp_age;
		if ((temp_age = cur_year-(p->myDate.year)) >= ageLimit)
		{
			isAge[i] = 1;
			p->myDate.day = temp_age;
			(*isAge_counter)++; // return how many people passed the age test
		}
	}
}
void choose(int* userChoice)
{
	printf("Make your choice: \n1\t\t\tyoungest\n2\t\t\tin town\nchoice: ");
	scanf("%d%*c", userChoice);
	while ((*userChoice)!=1 && (*userChoice)!=2) // use AND instead of OR.
	{
		printf("This is not a valid choice!\n");
		printf("Make your choice: \n1\t\t\tyoungest\n2\t\t\tin town\nchoice: ");
		scanf("%d%*c", userChoice);
	}
}
void printResults(P* p, int* userChoice, unsigned char* isAge, int isAge_counter, int maxAmount)
{
	P* original_p = p;
	char tmp_city[LEN];
	int tmp_youngest = p->myDate.year, pos = 0; // start by the first person of the struct array.
	int* bin_p = (int*)calloc(BINARYLEN, sizeof(int));
	switch (*userChoice)
	{
	case 1:
		for (size_t i = 0; i < maxAmount; i++,p++)
		{
			if (isAge[i] == 1)
			{
				if (p->myDate.year > tmp_youngest)
				{
					tmp_youngest = p->myDate.year;
					pos = i; // see its place in the array
				}
			}
		}
		p = original_p;
		printf("The youngest person that is old enough is:\n\n%s\n%d\t%x\t",(p+pos)->name, (p + pos)->myDate.year, (p + pos)->myDate.year);
		convertBit(bin_p, (p+pos)->myDate.year);
		printBit(bin_p, (p + pos)->myDate.year);
		// don't move the actual pointer but just display it shifted this time 
		break;
	case 2:
		printf("\nFor what town do you want the list of selected people? ");
		scanf("%s%*c", tmp_city);
		for (size_t i = 0; i < maxAmount; i++,p++)
		{
			if (!strcmp(tmp_city,p->town))
			{
				printf("%s \n%d\n\n",p->name, p->myDate.year);
			}
		}
		break;
	default:
		printf("This is not a valid choice!\n");
		printf("Make your choice: \n1\t\t\tyoungest\n2\t\t\tin town\nchoice: ");
		scanf("%d%*c", userChoice);
		break;
	}
}
void convertBit(int arr[],  int num)
{
	for(int i = 15; i >=0; i--)
	{
		*(arr+i) = num & 1; // ANDing
		i--;
		num >>= 1; // right shift
	}
}
void printBit(int arr[],  int num)
{
	for (int i = 0; i < 16; i++)
	{
		printf("%d", arr[i]);
		if ((i + 1) % 4 == 0)
		{
			printf("  ");
		}
	}
	printf("\n");
}