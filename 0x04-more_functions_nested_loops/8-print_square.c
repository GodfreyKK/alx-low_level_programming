#include "main.h"
/**
 * print_square - print a square of size
 * @size: area of square
 */

void print_square(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
