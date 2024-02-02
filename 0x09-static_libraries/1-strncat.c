#include "main.h"

/**
 * _strncat - concatenate 2 strings with n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated to dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
