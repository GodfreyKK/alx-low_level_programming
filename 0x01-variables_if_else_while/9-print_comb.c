#include <stdio.h>
/**
 * main - print possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int A;

	for (A = 48; A <= 57; A++)
	{
		putchar(A);
		if (A < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
