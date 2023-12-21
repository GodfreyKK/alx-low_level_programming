#include "main.h"

/**
 * print_numbers - print numbers 0-9 and a new line
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{

		_putchar(i);
	}
	_putchar('\n');
}
