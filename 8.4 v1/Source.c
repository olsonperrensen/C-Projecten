// try tattarrattat and banana && eva can i stab bats in a cave && murder for a jar of red rum
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // for toLower()

#define SIZE 100

int palindrome(char[], char[]);

int main(void)
{
	char arr[SIZE] = { 0 }; char rarr[SIZE] = { 0 }; char farr[SIZE] = { -1 }; // array of flags HOMEWORK
	int flag = -1;
	flag = palindrome(arr, rarr);
	if (flag == 1)
	{
		printf("\n\n\tConclusion: You submitted a palindrome sentence.\n\n");
	}
	else if (flag == 0)
	{
		printf("\n\n\tConclusion: You submitted a non-palindrome sentence.\n\n");
	}
	else
	{
		printf("\n\n\An error has occurred.\n\n");
	}
	return EXIT_SUCCESS;
}

int palindrome(char arr[], char rarr[])
{
	int j = 0, z = 0, length = 0, offset = 0;
	printf("\nEnter your name: ");
	gets(arr);
	int size = strlen(arr); // strlen doesn't change
	for (int i = 0; i < size+1; i++)
	{
		arr[i-offset] = tolower(arr[i]); // fn doesn't keep pointers so you need to do a lvalue
		/*
		i - offset = replace the next valid char with the place of the invalid char.
		*/
		if (arr[i-offset] < 'a' || arr[i-offset] > 'z')
		{
			// edge case missing
			arr[i] = '~';
			offset++;
		}
	}
	// get rid of the non-letters
	// should be in main
	while (arr[z] != '\0')
	{
		length++;
		z++;
	}
	z = NULL;
	for (int i = length - 1; i >= 0; i--)
	{
		rarr[j] = arr[i];
		j++;
	}
	for (int k = 0; k < length; k++)
	{
		if (rarr[k] == arr[k] && (arr[k] != ' ' && rarr[k] != ' '))
		{
			printf("\nReversed %d:%c against Original %d:%c : MATCH", k, rarr[k], k, arr[k]);
			/*flag = 1;*/
		}
		else if (rarr[k] != arr[k])
		{
			/*if ((arr[k] == ' ' || rarr[k] == ' '))
			{
				printf("\nReversed %d:%c against Original %d:%c : \t\t\t\t\tW H I T E  -  S P A C E ", k, rarr[k], k, arr[k]);
			}*/
			/*else
			{*/
				printf("\nReversed %d:%c against Original %d:%c : MIS-MATCH", k, rarr[k], k, arr[k]);
				return 0;
			/*}*/
		}
	}
	return 1;
}