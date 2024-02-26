#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string followed by a new line
 * @n: arhument count
 * @separator: first argument
 * @...: list of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list pr_str;
	char *str;

	va_start(pr_str, n);
	if (n > 0)
	{
		if (separator != NULL)
		{
			while (i < n)
			{
				str = va_arg(pr_str, char *);
				if (str == NULL && i != n - 1)
				{
					printf("nil%s", separator);
				}
				else if (str == NULL && i == n - 1)
				{
					printf("nil");
				}
				else if (i == n - 1)
				{
					printf("%s", str);
				}
				else
				{
					printf("%s%s", str, separator);
				}
				i++;
			}
			printf("\n");
		}
		else
		{
			while (i < n)
			{
				str = va_arg(pr_str, char *);
				if (str == NULL && i != n - 1)
				{
					printf("nil");
				}
				else if (str == NULL && i == n - 1)
				{
					printf("nil");
				}
				else if (i == n - 1)
				{
					printf("%s", str);
				}
				else
				{
					printf("%s", str);
				}
				i++;
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
	va_end(pr_str);
}
