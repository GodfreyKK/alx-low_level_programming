#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the value of a number
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else if (n % 10 < 5 && n % 10 != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
