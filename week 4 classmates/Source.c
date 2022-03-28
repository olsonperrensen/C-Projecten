/*
Open and read a file of integers into an array that is created with the first integer
telling you how many to read.
So  4  9  11  12  15
would mean create an int array size 4 and read in the remaining 4 values into data[].
Then compute their average as a double and their max  as an int.
Print all this out neatly to the screen and to an output file named answer-hw3.
*/

/*
Version: v1.0
Author: Equipboard Submission
Last Updated: 2022-01-07 21:10
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int amount, max = 0, * numbers, * original_numbers;
	double avg = 0.00;
	FILE* fp0 = fopen("data.txt", "r");
	FILE* fp1 = fopen("answer-hw3.txt", "w");
	if (!fp0 || !fp1)
	{
		exit(-1);
	} // in case there is an issue reading one of the files
	fscanf(fp0, "%d%*c", &amount); // know how much space you will need to reserve with malloc()
	numbers = calloc(amount, sizeof(int)); // I chose calloc instead just to debug easier with breakpoint
	//*numbers = amount; // This is a remainder from a previous version, ignore.
	original_numbers = numbers;
	/*max += *numbers;
	numbers++;*/ // idem 
	for (size_t i = 0; i < amount; i++, numbers++)
	{
		fscanf(fp0, "%d%*c", numbers);
		max += *numbers;
	}
	numbers = original_numbers; // head of pointer a.k.a. savepoint restored
	avg = (double)max / amount;
	printf("Your numbers were: ");
	for (size_t i = 0; i < amount; i++)
	{
		printf("%d ", *(numbers + i));
		fprintf(fp1, "%d ", *(numbers + i)); // by using *(pointer+increment) the pointer doesn't move
	}
	fprintf(fp1, "\n");
	printf("\nTheir max is %d\n", max);
	fprintf(fp1, "\nTheir max is %d\n", max);
	printf("The average of them is %.2lf", avg);
	fprintf(fp1, "The average of them is %.2lf", avg);
	fflush(fp0);
	fflush(fp1);
	fclose(fp0);
	fclose(fp1);
	return 0;
}