// try tattarrattat and banana
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int palindrome(char[], char[], int);

int main(void)
{
	char arr[SIZE] = { 0 }; char rarr[SIZE] = { 0 };
	int flag = NULL;
	palindrome(arr,rarr,flag);
	if (flag == 1)
	{
		printf("\n\n\tConclusion: You submitted a palindrome\n\n");
	}
	else
	{
		printf("\n\n\tConclusion: You submitted a non-palindrome\n\n");
	}
	return EXIT_SUCCESS;
}

int palindrome(char arr[], char rarr[], int flag)
{
	int j = 0, z = 0, length = 0;
	printf("\nEnter your name: ");
	gets(arr);
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
		if (rarr[k] == arr[k])
		{
			printf("\nReversed %d:%c against Original %d:%c : MATCH", k, rarr[k], k, arr[k]);
			flag = 1;
		}
		else
		{
			printf("\nReversed %d:%c against Original %d:%c : MIS-MATCH", k, rarr[k], k, arr[k]);
			flag = 0;
		}
	}
	return flag;
}
