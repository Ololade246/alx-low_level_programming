#include <stdio.h>
/**
 * main - print the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	putchar(alphabets);

	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	putchar(alphabets);

	putchar(alphabets);
	return (0);
}
