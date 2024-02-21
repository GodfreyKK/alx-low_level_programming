#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add a and b and return value
 *
 * @a: first argument
 * @b: second argument
 *
 * Return: int
 */

int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subtract a and b and return value
 *
 * @a: first argument
 * @b: second argument
 *
 * Return: int
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiply both a and b and return value
 *
 * @a: first argument
 * @b: second argument
 *
 * Return: int
 */

int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - dived a by b and return value
 *
 * @a: first argument
 * @b: second argument
 *
 * Return: int
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - check the remaider of a by b and return value
 *
 * @a: first argument
 * @b: second argument
 *
 * Return: int
 */

int op_mod(int a, int b)
{
if (b != 0)
{
return (a % b);
}
	printf("Error\n");
	exit(100);
}
