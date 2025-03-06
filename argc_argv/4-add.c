#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Checks if a string is a number
 * @s: The string to check
 *
 * Return: 1 if a number, 0 otherwise
 */
int is_number(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 on success, 1 if an argument contains non-digit symbols
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
