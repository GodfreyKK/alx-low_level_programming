#include "variadic_functions.h"
/**
 * print_all - a fuction that prints anything
 * @format: first and last argument
 * @...: argument list
 */

void print_all(const char * const format, ...)
{
	int x = 0, Flag;
	char *str;
	va_list pr_all;

	va_start(pr_all, format);
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(pr_all, int));
						Flag = 0;
						break;
			case 'i':
				printf("%d", va_arg(pr_all, int));
					Flag = 0;
					break;
			case 'f':
				printf("%f", va_arg(pr_all, double));
					Flag = 0;
					break;
			case 's':
				str = va_arg(pr_all, char *);
				if (str == NULL)
					str = "nil";
				printf("%s", str);
				Flag = 0;
				break;
			default:
				Flag = 1;
				break;
		}
		if (format[x + 1] != '\0' && Flag != 1)
		{
			printf(", ");
		}
		x++;
	}
	printf("\n");
	va_end(pr_all);
}
