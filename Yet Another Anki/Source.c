#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void fn();
typedef struct { int age, salary; }P;
int main(void)
{
	P myP[2] = {22, 44};
	int* p = &myP[0].salary;
	printf("%p\n", p);
	*(p+1) = 355;
	printf("%p", p);
	fn();
	return 0;
}
void fn()
{
	char b[9],a[9];
	b[0] = 'b';
	b[1] = 'o';
	b[2] = 'o';
	strcpy(a, "boo");
	int y = strcmp(a, b);
}