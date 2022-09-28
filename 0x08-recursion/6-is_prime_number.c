#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
	return (prime(2, n));
}
/**
 * prime - Return if a number is primary or not
 * @i: Value ++.
 * @n: Value check.
 * Return: 1 and 0.
 */
int prime(int i, int n)
{
	if (n <= 1)
		return (0);
	else if (i >= n)
		return (1);
	if (n % i != 0 && i != n)
		return (prime(i + 1, n));
	else
		return (0);
}
