// Avg Mirounga angustirostris's weight calculator by Equipboard Submission.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000 // array reads from 0 till 999 

int main(void)
{
	// init
	FILE* fp = fopen("e.txt","r");
	int elephant_data[MAX], avg, counter = 0;
	long int total = 0;
	int* p = &elephant_data[0];

	// getting the data and knowing how many elements we (actually) have
	while (fscanf(fp,"%d",p) != EOF)
	{
		total += (long int)(*p);
		p++;
		counter++;
	}

	// rounding up 
	avg = total / counter;
	
	// here we get the answer
	printf("The avg is: %d",avg);
	
	// goodbye!
	exit(0);

}