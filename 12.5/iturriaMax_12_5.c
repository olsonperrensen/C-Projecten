/*
Bit translator by Maximiliano Iturria
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXBITS 4
#define MAXPLACES 4
void c(int [][MAXPLACES],short int);
void p(int[][MAXPLACES], short int);
int main(void)
{
	int binary[MAXBITS][MAXPLACES];
	short int n = 0;
	printf(": ");
	scanf("%hd%*c", &n);
	c(binary,n);
	p(binary,n);
	return 0;
}
void c(int a[][MAXPLACES],short int num)
{
	/*
	If you iterate from zero it will do a mirror or reversed copy of the 
	binary values. Not what you want. Hence iteration must occur from 
	the highest 2d array index forward.
	*/
	for (int i = MAXBITS-1; i >= 0; i--) // go down to zero!
	{
		for (int j = MAXPLACES-1; j >= 0; j--)
		{
			/*
			Bitwise AND with '0x1' will tell you what binary
			value resides in the LSB (least-significant-bit)
			of the user's number.
			*/
			a[i][j] = num&0x1; 
			/*
			Move forward to do the next comparison.
			*/
			num = num >> 1;
		}
	}
}
void p(int a[][MAXPLACES], short int num)
{
	printf("\n\t\t\t\t");
	for (int i = 0; i < MAXBITS; i++)
	{
		for (int j = 0; j < MAXPLACES; j++)
		{
			printf("%d",a[i][j]);
		}
		printf(" "); // beautifying the output once a set of 4 bits has ended.
	}
	printf("\n\n\n");
}