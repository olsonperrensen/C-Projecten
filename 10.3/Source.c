#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXNAMES 33
#define MAXLETTERS 11
void r(char [][MAXLETTERS], int);
void c(char[][MAXLETTERS], int);
void p(char[][MAXLETTERS], int);
int main(void)
{
	int user_size = 0;
	char n[MAXNAMES][MAXLETTERS] = { '\0' };
	printf("User size: ");
	scanf("%d%*c", &user_size);
	r(n, user_size);
	c(n, user_size);
	p(n, user_size);
	return 0;
}
void r(char a[][MAXLETTERS], int u_size)
{
	for (int i = 0; i < u_size; i++)
	{
		printf("\nname: ");
		gets(a[i]);
	}
}
void c(char a[][MAXLETTERS], int u_size)
{
	char dummy[MAXLETTERS];
	for (int i = 1; i < u_size; i++)
	{
		for (int j = 0; j < u_size - 1; j++)
		{
			if (strcmp(a[j],a[j+1]) == 1)
			{
				strcpy(dummy,a[j]);
				strcpy(a[j], a[j+1]);
				strcpy(a[j+1], dummy);
			}
		}
	}
}
void p(char a[][MAXLETTERS], int u_size)
{
	for (int i = 0; i < u_size; i++)
	{
		printf("\n\n\t%s", a[i]);
	}
	printf("\n\n\n");
}