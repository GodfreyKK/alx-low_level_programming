#include "main.h"

/**
 * print_line - prints a straight line on terminal
 * @n: number of times it should be printed
 */
void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('_');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
