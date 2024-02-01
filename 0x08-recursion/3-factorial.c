#include "main.h"
/**
 * factorial - return the factorial of a number
 * @n: number whose factorial will be determined
 * Return: -1 if n is negative , 1 if n = 0 else factorial of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
