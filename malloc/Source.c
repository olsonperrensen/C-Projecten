#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

#define SIZE 53

//int main(void)
//{
//	//char str1[] = "Hello world";
//	//int siz = sizeof(str1);
//	//char* word[3] = { "Hello","Communists","Comrades" };
//	//char** ptr = word;
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	ptr = word[i];
//
//	//}
//	//int s = sizeof(word);
//	//return EXIT_SUCCESS;
//}

char* sfn(char* string_placeholder)
	{
	char* s;
	//s = (char*)malloc(SIZE);
	s = (char*)calloc(1, SIZE);
	//s[0] = 0;
	strcat(s,"It is my pleasure to meet you this evening, Ms. ");
	strcat(s, string_placeholder);
	return s;
}

int main(void)
{
	printf("%s\n\n",sfn("Everdeen"));
	//printf("%s\n\n", sfn("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum"));
	return EXIT_SUCCESS;
}