#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: first argument
 * @n: argument count
 * @...: argument list
 */

void print_numbers(const char *separator, unsigned int n, ...)
{
	unsigned int i = 0;
	va_list pr_num;

	va_start(pr_num, n);

	if (separator != NULL)
	{
		while (i < n - 1)
		{
			printf("%d%s", va_arg(pr_num, unsigned int), separator);
			i++;
		}
		if (i == n - 1)
		{
			printf("%d", va_arg(pr_num, unsigned int));
		}
		printf("\n");
	}
	else
	{
		while (i < n - 1)
		{
			printf("%d", va_arg(pr_num, unsigned int));
			i++;
		}
		if (i == n - 1)
		{
			printf("%d", va_arg(pr_num, unsigned int));
		}
		printf("\n");
	}
	va_end(pr_num);
}

