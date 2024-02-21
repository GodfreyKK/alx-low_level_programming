#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - allocate meory and concatenate s2 to s1;
 * @s1: dest string
 * @s2: src string
 * Return: pointer to new memory
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *cAt;

	if (s2 == NULL && s1 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 != NULL)
	{
		return (s2);
	}
	if (s2 == NULL && s1 != NULL)
	{
		return (s1);
	}
	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	while (s2[j] != '\0')
	{
		j++;
		len2++;
	}
	cAt = malloc((len1 + len2 + 1) * sizeof(char));
	if (cAt == NULL)
	{
		return (0);
	}
	for (i = 0; i < len1; i++)
	{
		cAt[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		cAt[len1 + j] = s2[j];
	}
	cAt[len1 + len2] = '\0';
	return (cAt);
}
