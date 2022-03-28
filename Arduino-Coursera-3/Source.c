#include <stdio.h>

int foo() {
	int x, y = 2, z = 3;
	y = y + z;
	x = y;
	// return (x);
}

int main() {
	int p;
	p = foo();
	printf("%i", p);
}