#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculate the least amount of change needed uusing 25,10,5,2,1
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 for error and 0 for normal and -1 for negative
 */

int main(int argc, char *argv[])
{
	int a, b, c, d, e, change = 0;
	int cents;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (-1);
	}
	a = cents / 25;
	cents %= 25;
	b = cents / 10;
	cents %= 10;
	c = cents / 5;
	cents %= 5;
	d = cents / 2;
	cents %= 2;
	e = cents;

	change = a + b + c + d + e;
	printf("%d\n", change);
	return (0);
}
