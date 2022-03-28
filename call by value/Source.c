#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int swap(int i, int j)
{
	int temp = i;
	i = j;
	j = temp;
	printf("\nA is %d, B is %d\n\n\n", i, j); // Internally OK.
}
int main(void)
{
	void swap_call_by_reference(int, int);
	int a = 2, b = 5;
	swap(a, b);
	printf("\nA is %d, B is %d\n\n\n", a, b); // Externally NOT OK.
	/**/
	swap_call_by_reference(&a, &b); // & needed!
	printf("\nA is %d, B is %d\n\n\n", a, b); // Externally OK.
	return 0;
}

void swap_call_by_reference(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
