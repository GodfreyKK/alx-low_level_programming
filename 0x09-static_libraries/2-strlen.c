#include "main.h"
/**
 * _strlen - return length of a string
 * @s: pointer
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}
