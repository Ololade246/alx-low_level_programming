#include <stdio.h>
#include "main.h"
/**
 * print_arrary - function that prints n element of an array
 * @a: input
 * @n: input
 *
 * Return: Always 0
 */
void print_arrary(int *a, int n)
{
	int i;

	for (i = 0; i < (n -1); i++)
		printf("%d", a[i]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
