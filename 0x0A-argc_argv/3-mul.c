#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is correct or 1 if wrong
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
