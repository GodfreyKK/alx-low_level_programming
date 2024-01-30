#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: source for dup
 * Return: dup
 */

char *_strdup(char *str)
{
	int i = 0, count = 0;
	char *dup;

	if (*str == 0)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	dup = malloc((count + 1) * sizeof(char));
	if (dup == 0)
	{
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		dup[i] = str[i];
	}
	dup[count] = '\0';
	return (dup);
	free(dup);
}
