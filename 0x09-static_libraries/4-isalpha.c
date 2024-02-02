#include "main.h"
/**
 * _isalpha - check if character is an alphabet
 * @c: character to be checked
 * Return: 1 if is alphabet and 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
