#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int banana, money, amount, total = 0, borrow;
	scanf("%d%d%d%*c", &banana, &money, &amount);
	
	for (size_t i = 1; i <= amount; i++)
	{
		total += banana * i;
	}
	if (total <= money)
	{
		borrow = 0;
	}
	else
	{
		borrow = total - money;
	}
	
	printf("%d",borrow);
	return 0;
}