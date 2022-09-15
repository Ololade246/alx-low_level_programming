#include <stdio.h>
/**
 * main - cause an infinite loop
 *
 * Return: 0
 */
int main(void)
{
	int n;

	printf("Infinite loop incoming :(\n");

	n = 0;

	while(n < 10)
	{
		putchar(n);
	}
	printf("Infinite loop avoided! \\o/\n");
	return(0);
}
