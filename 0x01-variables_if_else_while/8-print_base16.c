#include <stdio.h>
/**
 * main - print in hexadecimal all the numbers of base 16 in lowercase,
 * Return: 0
 */
int main(void)
{
	char A, a;

	for (A = '0'; A <= '9'; A++)
	{
		putchar(A);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
