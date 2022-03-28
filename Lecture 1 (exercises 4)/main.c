/*
	Excersise 4.12
	Asks for a certain amount of money and convert it into notes and coins (500, 100, 50, 20, 10, 5, 2, 1)
	Written by Max 23/09/2021
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
int dollars, rest;
/*int twohundred = 200, twenty = 20;
int hundred = 100, fifty = 50, ten = 10, five = 5, two = 2, one = 1; Discarded due to redundancy.*/
int fivehundredF = 0, twohundredF = 0, hundredF = 0, fiftyF = 0, twentyF = 0, tenF = 0, fiveF = 0, twoF = 0, oneF = 0;
printf("Please enter a valid currency value: $");
scanf("%d%*c", &dollars);

if (dollars > 0)
{
	fivehundredF = dollars / 500;
	rest = dollars % 500;
	twohundredF = rest / 200;
	rest = rest % 200;
	hundredF = rest / 100;
	rest = rest % 100;
	fiftyF = rest / 50;
	rest = rest % 50;
	twentyF = rest / 20;
	rest = rest % 20;
	tenF = rest / 10;
	rest = rest % 10;
	fiveF = rest / 5;
	rest = rest % 5;
	twoF = rest / 2;
	rest = rest % 2;
	oneF = rest / 1;
}
//else if (dollars > 199)
//{
//	twohundredF = (dollars % fivehundred) / 200;
//	hundredF = (dollars % fivehundred) / 100;
//	fiftyF = (dollars % hundred) / 50;
//	twentyF = (dollars % fifty) / 20;
//	tenF = (dollars % fifty) / 10;
//	fiveF = (dollars % ten) / 5;
//	twoF = (dollars % five) / 2;
//	oneF = (dollars % two);
//}
//else if (dollars > 99)
//{
//	hundredF = (dollars % fivehundred) / 100;
//	fiftyF = (dollars % hundred) / 50;
//	twentyF = (dollars % fifty) / 20;
//	tenF = (dollars % fifty) / 10;
//	fiveF = (dollars % ten) / 5;
//	twoF = (dollars % five) / 2;
//	oneF = (dollars % two);
//}
//else if (dollars > 49)
//{
//	fiftyF = (dollars % hundred) / 50;
//	twentyF = (dollars % fifty) / 20;
//	tenF = (dollars % fifty) / 10;
//	fiveF = (dollars % ten) / 5;
//	twoF = (dollars % five) / 2;
//	oneF = (dollars % two);
//}
//else if (dollars > 19)
//{
//	twentyF = (dollars % fifty) / 20;
//	tenF = (dollars % fifty) / 10;
//	fiveF = (dollars % ten) / 5;
//	twoF = (dollars % five) / 2;
//	oneF = (dollars % two);
//}
//else if (dollars > 9)
//{
//	tenF = (dollars % fifty) / 10;
//	fiveF = (dollars % ten) / 5;
//	twoF = (dollars % five) / 2;
//	oneF = (dollars % two);
//}
//else if (dollars > 4)
//{
//	fiveF = (dollars % ten) / 5;
//	twoF = (dollars % five) / 2;
//	oneF = (dollars % two);
//}
//else if (dollars > 1)
//{
//	twoF = (dollars % five) / 2;
//	oneF = (dollars % two);
//}
//else if (dollars > 1)
//{
//	oneF = (dollars % two);
//}
printf("\n\nYour number is equivalent to = \n%d notes of $500\n%d notes of $200\n%d notes of $100\n%d notes of $50\n%d notes of $20\n%d notes of $10\n%d notes of $5\n%d notes of $2\n%d notes of $1", fivehundredF, twohundredF, hundredF, fiftyF, twentyF, tenF, fiveF, twoF, oneF);
}