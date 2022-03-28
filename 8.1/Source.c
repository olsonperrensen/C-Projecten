#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

void readName(char array_inside[]);
void printName(char array_inside[]);

int main(void)
{
	char string[SIZE] = { 0 };
	readName(string);
	//if (string[0] == '\0') return -1; // read the first item
	printName(string);
	}

void readName(char array_inside[])
{
	printf("Enter your name: ");
	gets(array_inside);
	if (array_inside[0] == '\0') exit(-1);
}

void printName(char array_inside[])
{
	printf("Your entered name is: %s", array_inside);
}