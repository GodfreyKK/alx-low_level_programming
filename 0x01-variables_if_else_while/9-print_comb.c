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
		if (A == 57)
		{
			putchar(A);
		}
		else
		{
			putchar(A);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
