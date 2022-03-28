/*Too long words*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXWORDS 100
#define SIZE 2500
int main(void)
{
	char myword[MAXWORDS][SIZE] = {'\0'};
	char my_reversed_word[MAXWORDS][SIZE] = {'\0'};
	char first_letter;
	int str_size;
	int i = 0;
	char last_letter;
	int n_of_words;
	//printf("\nEnter the amount of strings you'll enter followed by the strings themselves separated by a space. When you're done, hit return.: ");
	scanf("%d", &n_of_words);
	while (i < n_of_words)
	{
		scanf("%s%*c", &myword[i]);
		my_reversed_word[i][0] = myword[i][strlen(myword[i]) - 1];
		if (strlen(myword[i]) > 10)
		{
			first_letter = myword[i][0];
			str_size = strlen(myword[i]) - 2;
			last_letter = my_reversed_word[i][0];
			printf("%c%d%c", first_letter, str_size, last_letter);
		}
		else if (myword[0] >= 'a')
		{
			printf("%s", myword[i]);
		}
		i++;
		printf("\n");
	}
	return 0;
}