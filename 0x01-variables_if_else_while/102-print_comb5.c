#include <stdio.h>
/**
 * main - print all combinations of two digits number
 *
 * Return: Always 0
 */
int main(void)
{
	int n1, n2, n3, n4;
	int i, j;

	while (n1 < 10)
		for (i = 0; i <= 98; i++)
		{
			for (n2 = 0; n2 < 10; n2++)
				for (j = i + 1; j <= 99; j++)
				{
					for (n3 = n1; n3 < 10; n3++)
					{
						for (n4 = 0; n4 < 10; n4++)
						{
							if (n3 == n1 && n4 <= n2)
							{
								continue;
						}
						else
						{
							putchar((n1 % 10) + '0');
							putchar((n2 % 10) + '0');
							putchar(32);
							putchar((n3 % 10) + '0');
							putchar((n4 % 10) + '0');
						}
						if (n1 == 9 && n2 == 8 && n3 == 9 && n4 == 9)
						{
							break;
						}
						else
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
			n1++;
		}
	putchar('\n');
	return (0);
}
