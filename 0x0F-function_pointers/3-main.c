#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
/** 
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main (int argc, char* argv[])
{       
        int num1, num2, calc;
        int (*y)(int, int);
        
        if (argc != 4)
        {       
                printf("Error\n");
                exit(98);
        }

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

        y = get_op_func(argv[2]);
	if (y == NULL)
        {
                printf("Error\n");
                exit(99);
        }
	calc = y(num1, num2);

	printf("%d\n", calc);
	return (0);
}
