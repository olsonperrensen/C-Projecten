#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 101
int main(void)
{
	char dynstr[LEN];
	int length;
	fscanf(stdin,"%s%*c",dynstr);
	length = strlen(dynstr);
	for (size_t i = 0; i < length; i++)
	{
		if (dynstr[i] == 'A' || dynstr[i] == 'a' || dynstr[i] == 'E' || dynstr[i] == 'e' || dynstr[i] == 'I' || dynstr[i] == 'i' || dynstr[i] == 'O' || dynstr[i] == 'o' || dynstr[i] == 'U' || dynstr[i] == 'u' || dynstr[i] == 'Y' || dynstr[i] == 'y')
		{
			continue;
		}
		else
		{
			printf(".");
			printf("%c",tolower(dynstr[i]));
		}
	}
	return 0;
}