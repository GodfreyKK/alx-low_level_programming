#include "main.h"

/**
 * print_diagonal - print \ on the terminal
 * @n: number of times \ to be printed
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
