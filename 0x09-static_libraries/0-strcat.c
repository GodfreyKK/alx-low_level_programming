#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
