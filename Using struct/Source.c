#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 10
typedef enum month {jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec}month;
typedef struct { month m;  int d;  }date;
void printday(date*);
void nextday(date*);
int main(void)
{
	date myD;
	date* p = &myD;
	int temp_month;
	char string_month[LEN];
	scanf("%s%d%*c",string_month,&myD.d);
	if (strlen(string_month)>1)
	{
		if (!strcmp(string_month, "jan"))
		{
			temp_month = 1;
		}
		else if (!strcmp(string_month, "feb"))
		{
			temp_month = 2;
		}
		else if (!strcmp(string_month, "mar"))
		{
			temp_month = 3;
		}
		else if (!strcmp(string_month, "apr"))
		{
			temp_month = 4;
		}
		else if (!strcmp(string_month, "may"))
		{
			temp_month = 5;
		}
		else if (!strcmp(string_month, "jun"))
		{
			temp_month = 6;
		}
		else if (!strcmp(string_month, "jul"))
		{
			temp_month = 7;
		}
		else if (!strcmp(string_month, "aug"))
		{
			temp_month = 8;
		}
		else if (!strcmp(string_month, "sep"))
		{
			temp_month = 9;
		}
		else if (!strcmp(string_month, "oct"))
		{
			temp_month = 10;
		}
		else if (!strcmp(string_month, "nov"))
		{
			temp_month = 11;
		}
		else if (!strcmp(string_month, "dec"))
		{
			temp_month = 12;
		}
	}
	myD.m = (month)temp_month;
	printday(p);
	return 0;
}
void nextday(date* p)
{
	switch (p->m)
	{
	case 1:
		if (p->d == 31)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	case 2:
		if (p->d == 28)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	case 3:
		if (p->d == 31)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	case 4:
		if (p->d == 30)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	case 5:
		if (p->d == 31)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	case 6:
		if (p->d == 30)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	case 7:
		if (p->d == 31)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	case 8:
		if (p->d == 31)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	case 9:
		if (p->d == 30)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	case 10:
		if (p->d == 31)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	case 11:
		if (p->d == 31)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	case 12:
		if (p->d == 31)
		{
			p->d = 1;
			p->m++;
		}
		else if (p->d > 0)
		{
			p->d++;
		}
		break;
	default:
		break;
	}
}
void printday(date* p)
{
	printf("~~~~~~~~~~~~~~~~~~~~~~\nYOUR DATA\n~~~~~~~~~~~~~~~~~~~~~~\n\t");
	switch (p->m)
	{
	case 1:
		printf("jan ");
		break;
	case 2:
		printf("feb ");
		break;
	case 3:
		printf("mar ");
		break;
	case 4:
		printf("apr ");
		break;
	case 5:
		printf("may ");
		break;
	case 6:
		printf("jun ");
		break;
	case 7:
		printf("jul ");
		break;
	case 8:
		printf("aug ");
		break;
	case 9:
		printf("sept ");
		break;
	case 10:
		printf("oct ");
		break;
	case 11:
		printf("nov ");
		break;
	case 12:
		printf("dec ");
		break;
	default:
		break;
	}
	printf("%d\n\n",p->d);
	nextday(p);
	printf("\t");
	switch (p->m)
	{
	case 1:
		printf("jan ");
		break;
	case 2:
		printf("feb ");
		break;
	case 3:
		printf("mar ");
		break;
	case 4:
		printf("apr ");
		break;
	case 5:
		printf("may ");
		break;
	case 6:
		printf("jun ");
		break;
	case 7:
		printf("jul ");
		break;
	case 8:
		printf("aug ");
		break;
	case 9:
		printf("sept ");
		break;
	case 10:
		printf("oct ");
		break;
	case 11:
		printf("nov ");
		break;
	case 12:
		printf("dec ");
		break;
	default:
		break;
	}
	printf("%d\n\n", p->d);
}