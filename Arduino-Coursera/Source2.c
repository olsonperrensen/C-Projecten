#include <stdio.h>

void foo() {
	int x, y = 2, z = 3;
	y = y + z;
	x = y;
	printf("%i", x);
}

int main() {
	foo();
}