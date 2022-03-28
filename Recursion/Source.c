#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*void countdown(int n) {
	while (n > 0)
	{
		printf("time is %d\n", n);
		n--;
}
	printf("Blast off\n");
}*/

void recursive_countdown(int n) {
	if (n == 0)
	{
		printf("Blast off\n");
	}
	else
	{
		printf("time is %d\n", n);
		recursive_countdown(n - 1);
	}
}


int main() {
	recursive_countdown(10);

	return 0;
}