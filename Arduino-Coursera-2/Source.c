#include <stdio.h>

void foo(int a, int b)
{
	int x, temp;
	temp = a + b;
	x = temp;
	printf("%i", x);
}

int main() {
	foo (22, 3);
}