/*Interactive operand calculations program by Maximiliano Iturria*/

#define _CRT_SECURE_NO_WARNINGS
/* I wanted to test this as well with a %c but it does not work since it grabs the ASCII equivalent of the first letter instead
#define PI 3.1415926535
#define e 2.71828
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	int n0 = 0, n1 = 0, old_n0 = 0; char operand = '0'; float mathResult = 0.00;
	
	printf("Please enter three things, them NOT being separated by a space: <num1> <operand> <num2>  :  ");
	
	if (scanf("%d%c%d%*c", &n0, &operand, &n1))
	{
		switch (operand)
		{
			// %
		case 37:
			mathResult = n0 % n1;
			break;

			// *
		case 42:
			mathResult = n0 * n1;
			break;

			// +
		case 43:
			mathResult = n0 + n1;
			break;

			// -
		case 45:
			mathResult = n0 - n1;
			break;

			// / (divided by)
		case 47:
			mathResult = (float)n0 / n1;
			break;

			// =
		case 61:
			old_n0 = n0;
			mathResult = (n0 = n1);
			break;

			// ^
		case 94:
			mathResult = pow((float)n0, n1); // had to dig in math.h to find it	
			break;

		default:
			printf("\nThis is something else than a mathematical operand. \tPlease get a new pair of glasses\n\n\n");
			break;
		}
	}
	else
	{
		printf("\nYou did not follow the rules...\n\n\n");
		return 0;
	}
	if (operand == 37)
	{
		printf("\n\t\t\t%d %c %d = %1.f\n\n\n", n0, operand, n1, mathResult);
	}
	else if (operand == 61)
	{
		printf("\n\t\t\t%d %c %d = %3.2f\n\n\n", old_n0, operand, n1, mathResult);
	}
	else
	{
		printf("\n\t\t\t%d %c %d = %3.2f\n\n\n", n0, operand, n1, mathResult);
	}
	return 0;
}