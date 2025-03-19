#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry point for the calculator program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, exits with an error code otherwise
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

	/* Convert numbers and check for invalid inputs */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Get operation function */
	operation = get_op_func(argv[2]);

	/* Check if the operator is valid */
	if (strlen(argv[2]) != 1 || operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Check division by zero */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Perform the operation */
	printf("%d\n", operation(num1, num2));

	return (0);
}

