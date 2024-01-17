#include "main.h"

/**
 * puts2 - print every other number
 * @str: string to be printed
 */

void puts2(char *str)
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
		if (str[i] % 2 == 0 && str[i] != '\0')
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
