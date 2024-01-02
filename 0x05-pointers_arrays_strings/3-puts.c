#include "main.h"
/**
 * _puts - print a string and a line after
 * @str: string
 */
void _puts(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		i++;
		count++;
	}

	for (i = 0; i <= count; i++)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
