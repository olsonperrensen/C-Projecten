/*Hypotenuse calculator by Maximilino Iturria*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	long float hypotenuse, side1 = 0, side2 = 0;
	
	printf("Give me your known triangle sides and a zero, each item separated by one space: ");
	
	if (scanf("%lf%lf%lf%*c", &side1, &side2, &hypotenuse))
	{
		if (hypotenuse == 0) //&& side1 > 0 && side2 > 0) was scrapped away
		{
			hypotenuse = sqrt((side1 * side1) + (side2 * side2));
			printf("\n\n\tYour unknown side has been revealed. \n                                                                                     -- \n                                                                                  --/  |\n                                                                                -/     |\n                                                                             --/       |\n                                                                          --/          |\n                                                                        -/             |\n                                                                     --/               |\n                                                                  --/                  |\n                                                                -/                     |\n                                                             --/                       |\n                                                          --/                          |\n                                                        -/                             |\n                                                     --/                               |\n                                                  --/                                  |\n                                                -/                                     |\n                                             --/                                       |\n                                          --/                                          |\n                                       --/                                             |\n                                     -/                                                |\n                                  --/                                                  |\n                               --/                                                     |\n                             -/                                                        |\n                          --/                                                          |\n                       --/                                                             |\n                     -/                                                                |\n                  --/                                                                  |\n               --/                                                                     |\n             -/                                                                        |\n          --/                                                                          |\n       --/                                                                             |\n     -/                                                                                |\n  --/                                                                                  |\n-/------------------------------------------------------------------------------------- \n\n\t\t\t\t\t\tIt is equivalent to the hypotenuse %6.3lf\n\n\n", hypotenuse);
		}
		else
		{
			printf("\nYou did not enter zero in the third place as kindly requested. Please, close this tab and try again.\n\n\n");
		}
	}
	else
	{
		printf("\nYou did not enter valid numbers as kindly requested. Please, close this tab and try again.\n\n\n");
	}

	return 0;
}