#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXROW 50
#define MAXLEN 999
int main(void)
{
	char str[MAXROW][MAXLEN];
	char str2[5];
	int x = 1, i = 0;
	FILE* fp = fopen("a.txt","r");
	//while ((x = fgets(str2, MAXROW, fp))!= 0)
	//{
	//	//x = fgets(str[i], MAXROW, fp);
	//	i++;
	//	printf("%s", str2);
	//}
	while ((x = fgets(str[i], MAXROW, fp)) != NULL)
	{
		printf("%s", str[i]);
		i++;
	}
	return 0;
}