#include "main.h"

/**
 * _memcpy - copy memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: number of memory area to copy from src to dest
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
