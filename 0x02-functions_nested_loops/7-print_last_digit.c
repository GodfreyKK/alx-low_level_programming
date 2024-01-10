#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @x : in being checked
 * Return: value of last number
 */
int print_last_digit(int x)
{
	int num = x % 10;

	if (num < 0)
	{
		num = -num;
	}
	_putchar('0' + num);
	return (num);
}
