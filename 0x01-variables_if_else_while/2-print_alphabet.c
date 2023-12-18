#include <stdio.h>
/**
 * main - print alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
