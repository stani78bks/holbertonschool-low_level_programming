#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * This program takes two integers and an operator as input and performs
 * the corresponding operation (addition, subtraction, multiplication,
 * division, or modulo). It handles invalid input and division by zero
 * errors.
 *
 * Return: 0 if the program runs successfully, exits with status 98, 99,
 * or 100 for errors.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(num1, num2));

	return (0);
}

