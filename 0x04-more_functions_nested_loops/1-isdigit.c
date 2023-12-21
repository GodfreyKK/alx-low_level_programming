#include "main.h"

/**
 * _isdigit - check if character is a digit
 * @c: charcter to be checked
 * Return: 1 if digit and 0 for other
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
