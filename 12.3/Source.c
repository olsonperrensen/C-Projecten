#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char a();
int r();
void p(short int, char);
int main(void)
{
	short i = r();
	char format = a();
	p(i, format);
	return 0;
}
char a()
{
	char choice;
	printf("\nFor decimal formatting, type 'd', for hexadecimal formatting, type 'x': ");
	scanf("%c%*c", &choice);
	return choice;
}
int r()
{
	short i_replica;
	printf("input: ");
	scanf("%hd%*c", &i_replica);
	return i_replica;
}
void p(short int i_in_fn, char choice)
{
	short bit_one, bit_two, bit_three, bit_four;
	bit_one = (i_in_fn >> 12) & 0x000f;
	bit_two = (i_in_fn >> 8) & 0x000f;
	bit_three = (i_in_fn >> 4) & 0x000f;
	bit_four = i_in_fn & 0x000f;
	printf("\noutput: ");
	if (choice == 'd')
	{
		printf("%hd\t", bit_one);
		printf("%hd\t", bit_two);
		printf("%hd\t", bit_three);
		printf("%hd\n\n", bit_four);
	}
	else if (choice == 'x')
	{
		printf("%x\t", bit_one);
		printf("%x\t", bit_two);
		printf("%x\t", bit_three);
		printf("%x\n\n", bit_four);
	}
}