#include "function_pointers.h"
/**
 * print_name - a fuction that takes a char and a function pointer
 * @name: first argument
 * @f: second argument
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	ptr = f;
	if (f != NULL)
	{
		ptr(name);
	}
}
