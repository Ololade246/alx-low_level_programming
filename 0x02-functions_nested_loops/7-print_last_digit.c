#include "main.h"

/**
 * print_last_digit - print the last digit of a number 
 * @n:The number in question
 *
 * Return: Always 0
 */
int print_last_digit(int)
{
	int last_digit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;

	 _putchar(last_digit + '0');
	 retun (last_digit);
}
