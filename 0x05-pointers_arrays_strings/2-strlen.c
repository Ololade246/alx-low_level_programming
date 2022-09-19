#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that prints the lenth of a string
 * @s: variable input
 *
 * Return: Lenth of a string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
