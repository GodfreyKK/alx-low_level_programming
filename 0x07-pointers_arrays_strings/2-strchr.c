#include "main.h"

/**
 * _strchr - find the value of c and return its address
 * @c: value being searched for in s
 * @s: string
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
