#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LEN 222
int main(void)
{
	FILE* fp0;
	fp0 = fopen("written.txt", "r");
	char sentence_fragment[LEN];
	char word_detector[LEN];
	int line_number=1;
	printf("Enter the pattern you want to detect: ");
	gets(word_detector);
	printf("\n");
	while(fgets(sentence_fragment,LEN,fp0))
	{
		if (strstr(sentence_fragment, word_detector))
		{
			printf("Your [%s] was found ON |%d| \"%s\"\n",word_detector, line_number, sentence_fragment);
		}
		line_number++;
	}
	return 0;
}