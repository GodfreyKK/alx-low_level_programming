#include "main.h"

/**
 * puts_half - print half a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		i++;
		count++;
	}

	if (count % 2 != 0)
	{
		for (i = ((count - 1) / 2) + 1; i <= count; i++)
		{
			if (str[i] != '\0')
			{
				_putchar(str[i]);
			}
		}
	}
	else
	{
		for (i = count / 2; i <= count; i++)
		{
			if (str[i] != '\0')
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
