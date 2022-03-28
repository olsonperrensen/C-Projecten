#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 100
#define N 52
typedef struct { int rank; char card_name[LEN]; }Deck;
int main(void)
{
	Deck myD[N];
	Deck* p = &myD;
	for (size_t i = 0; i < N; i++,p++)
	{
		scanf("%d%s%*c",&(p->rank),(p->card_name));
	}
	return 0;
}