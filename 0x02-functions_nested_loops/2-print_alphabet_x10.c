#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int a1;
	int a2;

	for (a1 = 0; a1 <= 9; a1++)
	{
		for (a2 = 'a'; a2 <= 'z'; a2++)
		{
			_putchar(a2);
		}
		_putchar('\n');
	}
}
