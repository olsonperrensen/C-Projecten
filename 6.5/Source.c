#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int randomNr(void);

int main(void)
{
	int SecretNr = randomNr(), userNr = 0;
	do
	{
	//printf("%d\n\n", SecretNr);
	printf("\nGuess my number: ");
	scanf("%d%*c", &userNr);
	if (userNr < SecretNr) printf("\nToo low.");
	else if (userNr > SecretNr) printf("\nToo high");
	else printf("\nYou got it right buddy, your guess %d = %d (the secret number)\n\n", userNr, SecretNr);
	} while (SecretNr != userNr);
	return 0;
}

int randomNr(void)
{
	srand(time(NULL));
	return (rand()%100+1);
}