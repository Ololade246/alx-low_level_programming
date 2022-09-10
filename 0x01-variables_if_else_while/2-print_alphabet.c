#include <stdio.h>

/**
 * main-entry point for the program.
 *
 * Return:0 if no errors, return non zero if errors
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
