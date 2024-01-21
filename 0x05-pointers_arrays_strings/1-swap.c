#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: to be swapped
 * @b: to be swapped
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
