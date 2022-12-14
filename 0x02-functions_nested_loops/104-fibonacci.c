#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description:  Finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fr1 = 0, b1 = 1, fr2 = 0, b2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", b1, b2);
	for (count = 2; count < 98; count++)
	{
		if (b1 + b2 > LARGEST || fr2 > 0 || fr1 > 0)
		{
			hold1 = (b1 + b2) / LARGEST;
			hold2 = (b1 + b2) % LARGEST;
			hold3 = fr1 + fr2 + hold1;
			fr1 = fr2, fr2 = hold3;
			b1 = b2, b2 = hold2;
			printf("%lu%010lu", fr2, b2);
		}
		else
		{
			hold2 = b1 + b2;
			b1 = b2, b2 = hold2;
			printf("%lu", b2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
