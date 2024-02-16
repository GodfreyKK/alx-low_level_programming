#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - add all integers
 * @n: first argument
 * Return: total
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
        int count = 0;
        unsigned int i;

	va_list args;
	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		count = va_arg(args, int);
		total += count;
	}
	va_end(args);
	return (total);
}
