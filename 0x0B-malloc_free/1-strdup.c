#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: source for dup
 * Return: dup
 */

char *_strdup(char *str)
{
	int i = 0, count = 0;
	char *dup;

	if (str == NULL || *str == '\0')
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	dup = malloc((count + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		dup[i] = str[i];
	}
	dup[count] = '\0';
	return (dup);
}
