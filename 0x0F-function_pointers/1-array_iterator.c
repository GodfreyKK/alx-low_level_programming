#include "function_pointers.h"
/**
 * array_iterator - a function
 * @array: first argument
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*x)(int);

	x = action;
	if (array != NULL && x != NULL)
	{
		for (i = 0; i < size; i++)
		{
			x(array[i]);
		}
	}
}
