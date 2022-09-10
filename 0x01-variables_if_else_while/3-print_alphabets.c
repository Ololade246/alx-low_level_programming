#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description:using the main function
 * this program prints "programming is positive, zero, or negative"
 * Return: 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
