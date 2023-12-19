#include "main.h"
/**
 * _islower - check if a character is lower
 * @c: character to be checked
 * Return: 1 if lower and 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
