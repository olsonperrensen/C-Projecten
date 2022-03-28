#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	void* p;
	int i = 44;
	int c = 'z';
	p = &i;
	printf("%d", *(int*)p);
	p = &c;
	printf("\t%c", *(char*)p);
	printf("\n\n\n");
}