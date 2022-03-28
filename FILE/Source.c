#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE* fp, * fp2;
	char line[BUFSIZ];
	fp = fopen("IN.txt", "r");
	fp2 = fopen("OUT.txt", "w");
	while (fgets(line, BUFSIZ, fp) != NULL) fputs(line, fp2); /* Otherwise reads once.*/
	fclose(fp);
	fclose(fp2);
	return EXIT_SUCCESS;
}