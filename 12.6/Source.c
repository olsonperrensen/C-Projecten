#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int k;
	int baud_rate;
	int sync;
	printf("Enter a n: ");
	scanf("%d%*c", &n);
	baud_rate = n&0x3f;
	sync = n>>6;
	printf("\n");
	printf("0x%d 0x%d\n", baud_rate, sync);
	printf("0x%X 0x%x\n\n\n", baud_rate, sync);
	for (int i = 0; i < 8; i++)
	{
		if (i % 4 == 0) printf(" ");
		k = baud_rate >> 7-i; /* the easiest way to flip the printed output so the MSB
							  doesn't become the LSB */
		printf("%d", k&0x1); // baud
	}
	printf("\n\n");
	for (int i = 0; i < 8; i++)
	{
		if (i % 4 == 0) printf(" ");
		k = sync >> 7 - i; /* the easiest way to flip the printed output so the MSB
							  doesn't become the LSB */
		printf("%d", k & 0x1); // sync
	}
	//for (int i = 0; i < 8; i++)
	//{
	//	if (i % 4 == 0) printf(" ");
	//	k = n >> 7 - i; /* the easiest way to flip the printed output so the MSB
	//						  doesn't become the LSB */
	//	printf("%d", k & 0x1);
	//}
	return 0;
	// |= syntax sugar or equals
}