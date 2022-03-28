#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MORSE_LIMIT 5
char ask();
void convert(char, char**,char[]);
int main(void)
{
	const char* morse[] = { ".-", "-...", "-.-.", "-..", ".", "..- .", "--.", "....", "..",".---", "-.-", ".-..", "--", "-.", "- --", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", NULL };
	char c_converted[MORSE_LIMIT] = {'\0'};
	char c, userChoice;
	do{
	c = ask();
	convert(c,morse,c_converted);
	printf("\nContinue?: ");
	scanf("%c%*c", &userChoice);
	} while (userChoice == 'Y' || userChoice == 'y');
	return 0;
}
char ask()
{
	char dummy = 0;
	printf("\nEnter a letter: ");
	scanf("%c%*c", &dummy);
	if (dummy >= 'a' && dummy <= 'z')
	{
		dummy = toupper(dummy);
	}
	return dummy;
}
void convert(char c,char **morse_array, char new_array[])
{
	strcpy(new_array, morse_array[(int)c-65]);
	printf("\n%c is %s", c, new_array);
}