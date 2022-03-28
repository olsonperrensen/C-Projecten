#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 12
int main(void)
{
	char c = 'A';
	char s[LEN] = { 'a', 'b', 'c'};
	int i = 0;
	FILE* fp = fopen("a.txt", "w");
	//for (int i = 0; i <= 900; i++)
	//{
	//	fprintf(fp, "%d | %c\n", i, c++);
	//	printf("%d\n", ftell(fp));
	//}
	//while ((s[i] = fgetc(fp))!=EOF)
	//{
	//	printf("%c",s[i]);
	//}
	while (s[i] != '\0')
	{
		fputc(s[i],fp);
		i++;
	}
	return 0;
}