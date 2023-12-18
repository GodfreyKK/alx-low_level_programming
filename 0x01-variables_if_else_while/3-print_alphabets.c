#include <stdio.h>
/**
 * main - print alphabet in lower case then UPPER CASE
 * Return: 0
 */
int main(void)
{
	char A, a;

	for (A = 'a'; A <= 'z'; A++)
	{
		putchar(A);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
