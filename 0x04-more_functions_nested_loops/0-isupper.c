#include "main.h"
/**
 * _islower - check if a character is upper
 * @c: character to be checked
 * Return: 1 if lower and 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
