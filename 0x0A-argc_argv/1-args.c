#include <stdio.h>

/**
 * main - a program that prints name of program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	for (i = 1; argv[i] != argv[argc]; i++)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
