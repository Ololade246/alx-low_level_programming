#include "main.h"
/**
 * puts2 - function that print only one character out of two starting with the first one 
 * @str: input variable
 *
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[1] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
