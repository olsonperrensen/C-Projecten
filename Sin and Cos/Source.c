/* Example using sin Magdy Edwar*/
//and including the math library 
#include <stdio.h>
#include <math.h>

int main(void)
{

	/* Define temporary variables */
	float  Value;
	float Sine, Cosine;
	for (int i = 0; i < 100; i++)
	{
		Value = i / 10.0;

		/* Calculate the Sine of value */
		Sine = sin(Value);

		/* Calculate the value of Cosine */
		Cosine = cos(Value);

		/* Show the result of the calculation */
		printf("sine(%f) = %f\t cosine(%f) = %f\n", Value, Sine, Value, Cosine);
	}
	return 0;

}