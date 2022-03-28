/* Morse translator v1.0 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MORSE_LETTERS 100
#define MORSE_LIMIT 5
#define LETTERS 100
int ask(char[]);
void convert(char[], int, char**, char[][MORSE_LIMIT]);
int main(void)
{
	const char* morse[] = { ".-", "-...", "-.-.", "-..", ".", "..- .", "--.", "....", "..",".---", "-.-", ".-..", "--", "-.", "- --", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", NULL };
	char str_converted[MORSE_LETTERS][MORSE_LIMIT] = { '\0' };
	char str[LETTERS], userChoice;
	int eff_length;
	do {
		eff_length = ask(str);
		convert(str, eff_length, morse, str_converted);
		printf("\nContinue?: ");
		scanf("%c%*c", &userChoice);
	} while (userChoice == 'Y' || userChoice == 'y');
	return 0;
}
int ask(char str[])
{
	char dummy[LETTERS] = { '\0' };
	int eff_length;
	printf("\nEnter a word: ");
	gets(dummy);
	eff_length = strlen(dummy)+1;
	for (int i = 0; i < eff_length; i++)
	{
		if (dummy[i] >= 'a' && dummy[i] <= 'z')
		{
			str[i] = toupper(dummy[i]);
		
		}
		else
		{
			str[i] = dummy[i];
		}
	}
	return eff_length;
}
void convert(char str[], int eff_length, char** morse_array, char new_array[][MORSE_LIMIT])
{
	for (int i = 0; i < eff_length-1; i++)
	{
		/*if ((int)str[i] == 32)
		{
			new_array[i][0] = "/";
			continue;
		}*/
		//else { // once activated this breaks the pretty-printing
		strcpy(new_array[i], morse_array[(int)str[i] - 65]);
		//}
	}
	printf("\n%s is: ", str);
	for (int i = 0; i < (eff_length-1); i++)
	{
		printf(" %s ", new_array[i]);
	}
}