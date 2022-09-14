#include "main.h"
/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
