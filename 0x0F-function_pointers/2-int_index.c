#include "function_pointers.h"
/**
 * int_index - function
 * @array: first argument
 * @size: size of array
 * @cmp: function pointer
 * Return: index -1 otherwise
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i = 0;
	int (*p)(int);

	p = cmp;

	if (array != NULL && p != NULL)
	{
		if (size > 0)
		{
			while (i < size)
			{
				if (p(array[i]) != 0)
				{
					return (i);
				}
			++i;
			}
		}
	}
	return (-1);
}
