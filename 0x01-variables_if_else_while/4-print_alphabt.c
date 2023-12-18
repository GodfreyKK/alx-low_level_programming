#include <stdio.h>
/**
 * main - print alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		if (A != 'e' && A != 'q')
		{
			putchar(A);
		}
	}
	putchar('\n');
	return (0);
}
