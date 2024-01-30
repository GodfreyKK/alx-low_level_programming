#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters and initialize with c
 * @size: size of array
 * @c: character constant
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (0);
	}

	arr = malloc(size * sizeof(char));

	if (arr == 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
