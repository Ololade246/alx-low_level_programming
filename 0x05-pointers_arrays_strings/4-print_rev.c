#include "main.h"

/**
 * print_rev - function that print a string in reverse, followed by a new line
 * @s: input
 *
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int fcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}
	for (n = (fcounter -1); n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
