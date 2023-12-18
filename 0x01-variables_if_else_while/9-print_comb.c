#include <stdio.h>
/**
 * main - print possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	char A;

	for (A = '0'; A <= '9'; A++)
	{
		putchar(A);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
