#include "main.h"
/**
 * _isupper - check if a character is upper
 * @c: character to be checked
 * Return: 1 if upper and 0 for otherwise
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
