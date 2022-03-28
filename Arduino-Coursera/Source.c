#include <stdio.h>

int main() {
	int i = 0;
	while (i < 3)
	{
		printf("%i\n", i);
		i = i + 1;
	}
	if (i == 3)
		printf("You have exited the loop");
}