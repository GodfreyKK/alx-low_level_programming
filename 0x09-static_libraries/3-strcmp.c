#include "main.h"

/**
 * _strcmp - used to compare two strings
 * @s1: string to be compared
 * @s2: string to be compared to s1
 * Return: 0 if same or (s1[i] -s2[i]) if otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
