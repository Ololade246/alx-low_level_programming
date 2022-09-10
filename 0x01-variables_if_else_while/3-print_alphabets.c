#include <stdio.h>
/**
 * main-entry point of the program.
 *
 * Return:0 if no errors, return non zero if errors
 */
int main(void)
{
	char c = 'a';
	char C = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
