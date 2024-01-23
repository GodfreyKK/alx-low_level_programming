#include "main.h"

/**
 * _strncpy - copy n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
