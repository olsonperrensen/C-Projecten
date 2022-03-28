#include <stdio.h>

extern int reps = 0;


int main() {
	auto int i = 1;
	const int Limit = 10;
	for (i; i < Limit; i++)
	{
		printf("i local = %d, reps global = %d\n", i, reps);
		f();
	}
	return 0;
}

int f() {
	static int called = 0;
	printf("f called %d\n", called);
	called++;
	reps += called;
	return 0;
}