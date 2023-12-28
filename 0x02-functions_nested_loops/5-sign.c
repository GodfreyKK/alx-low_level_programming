#include "main.h"
/**
 * print_sign - print a sign of a number
 * @n: int to be determined which sign it has
 * Return: 1 for positvie 0 for zero and -1 for negative
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if (n < '0')
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
	else if (n == '0')
	{
		_putchar(48);
		return (0);
		_putchar('\n');
	}
	return (0);
}
