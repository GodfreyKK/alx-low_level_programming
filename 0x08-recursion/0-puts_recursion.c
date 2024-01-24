#include "main.h"

/**
 * _puts_recursion - prints a string plus a new line recursively
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		i++;
		count++;
	}

	for (i = 0; i < count; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
