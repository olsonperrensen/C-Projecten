#include <stdio.h>
int fibonacci(int num1, int num2)
{
	//int sum = num1 + num2;
	//return (sum);
}
int main()
{
	int fibo1 = 0;
	int fibo2 = 1;
	
	for (int i = 0; i < 5; i++)
	{
		fibonacci(fibo1, fibo2);
//		int fibores = fibo1 + fibo2;
		printf("%i %i \n", fibo1, fibo2);
		fibo1 += fibo2;
		fibo2 += fibo1;
	}
}