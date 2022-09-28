#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
