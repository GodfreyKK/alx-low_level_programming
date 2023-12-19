#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 */
void print_alphabet_x10(void)
{
	char A, a;

	for (a = 0; a <= 9; a++)
	{
		for (A = 'a'; A <= 'z'; A++)
		{
			_putchar(A);
		}
		_putchar('\n');
	}
}
